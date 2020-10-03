#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSize>
#include <QApplication>
#include <qdesktopwidget.h>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QProgressBar>
#include <QLabel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <QColor>
#include <QTableView>
#include <QSqlQueryModel>
#include <QRadioButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(QSize(800, 600));
    QVBoxLayout* mainLayout = new QVBoxLayout();
    QGridLayout* gridLayout = new QGridLayout();
    QColor colors[5]={Qt::blue, Qt::red, Qt::green, Qt::cyan, Qt::yellow};
    for(int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            QPushButton* button = new QPushButton();
            button->setText(QString::number(i*5 + j +1));
            button->setEnabled(false);
            gridLayout->addWidget(button, i, j, 1, 1);
            button->show();
            QPalette pal = button->palette();
            pal.setColor(QPalette::Button, QColor(colors[i]));
            button->setAutoFillBackground(true);
            button->setPalette(pal);
            button->update();
            //buttons.emplace_back(button);
            if(i == 0){
                connect(button, &QPushButton::clicked, this, &MainWindow::openRadioDialog);
            } else {
                connect(button, &QPushButton::clicked, this, &MainWindow::openDialog);
            }
        }
    }
    mainLayout->addLayout(gridLayout);
    ui->centralWidget->setLayout(mainLayout);

    QProgressBar* progressBar = new QProgressBar(ui->statusBar);
    progressBar->setMaximumSize(100, 20);
    ui->statusBar->addWidget(progressBar);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/aner/KVIZ");
    if(database.open())
        statusBar()->showMessage(QString("Database Open"));
    else
        statusBar()->showMessage(QString("Database NOT Open bla bla bla bla"));

    loginWindowAction = new QAction("Log In", this);
    loginWindowAction ->setStatusTip("Log In to the app");
    connect(loginWindowAction , &QAction::triggered, this, &MainWindow::logIn);

    pregledAction = new QAction("Pregled", this);
    connect(pregledAction , &QAction::triggered, this, &MainWindow::pregled);

    startMenu = menuBar()->addMenu("Start");
    startMenu->addAction(loginWindowAction );
    startMenu->addAction(pregledAction);

    ui->mainToolBar->addAction(loginWindowAction);
    ui->mainToolBar->addAction(pregledAction);
}

void MainWindow::logIn(){
    loginWindow = new QWidget(this, Qt::Window);
    loginWindow->setWindowModality(Qt::ApplicationModal);

    QVBoxLayout* mainLoginLayout = new QVBoxLayout(loginWindow);
    QGridLayout* loginLayout = new QGridLayout(loginWindow);
    QLabel* kIme = new QLabel(loginWindow);
    kIme->setText("Korisnicko ime");
    loginLayout->addWidget(kIme, 0, 0, 1, 1);
    kIme->show();
    kImeT = new QLineEdit(loginWindow);
    loginLayout->addWidget(kImeT, 1, 0, 1, 1);
    kImeT->show();
    QLabel* sifra = new QLabel(loginWindow);
    sifra->setText("Sifra");
    loginLayout->addWidget(sifra, 2, 0, 1, 1);
    sifra->show();
    sifraT = new QLineEdit(loginWindow);
    sifraT->setEchoMode(QLineEdit::Password);
    loginLayout->addWidget(sifraT, 3, 0, 1, 1);
    sifraT->show();
    QPushButton* loginPush = new QPushButton(loginWindow);
    loginPush->setText("Prijava");
    loginLayout->addWidget(loginPush, 4, 0, 1, 1);
    loginPush->show();
    connect(loginPush , &QPushButton::clicked, this, &MainWindow::checkLogin);

    mainLoginLayout->addLayout(loginLayout);
    loginWindow->setLayout(mainLoginLayout );
    loginWindow->show();
}

void MainWindow::checkLogin(){
    QString ime = kImeT->text();
    QString sifra = sifraT->text();
    QSqlQuery upit(database);
    upit.prepare("SELECT ime, prezime FROM STUDENTI WHERE korisnickoIme=(:ime) AND sifra=(:sifra)");
    upit.bindValue(":ime", ime);
    upit.bindValue(":sifra", sifra);
    if(upit.exec()){
        if(upit.next()){
            statusBar()->showMessage("Welcome: " + upit.value("ime").toString() + " " + upit.value("prezime").toString());
            loginWindow->deleteLater();
            QMessageBox* msg = new QMessageBox(this);
            msg->setText("Prijava uspjesna");
            msg->exec();
            //for(auto* button : buttons){
                //button->setEnabled(true);
            }
        }else{
            QMessageBox* msg = new QMessageBox(this);
            msg->setText("Prijava neuspjesna");
            msg->exec();
        }
    //}else{
        qDebug()<< "Err: " << upit.lastError();
    }
//}//

void MainWindow::openRadioDialog(){
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender());
    int redniBroj  = buttonSender->text().toInt();
    brojPitanja = redniBroj;
    buttonSender->setEnabled(false);
    QSqlQuery upit(database);
    upit.prepare("SELECT * FROM PITANJA WHERE redniBroj=(:rb)");
    upit.bindValue(":rb", redniBroj);
    if(upit.exec()){
        if(upit.next()){
            dialog = new QWidget(this, Qt::Window);
            dialog->setWindowModality(Qt::ApplicationModal);

            QVBoxLayout* mainDialogLayout = new QVBoxLayout(dialog);
            QGridLayout* dialogLayout = new QGridLayout(dialog);
            QLabel* tekst = new QLabel(dialog);
            tekst->setText(upit.value("tekstPitanja").toString());
            dialogLayout->addWidget(tekst, 0, 0, 1, 1);
            tekst->show();

            odgovori = new QGroupBox();
            QVBoxLayout* groupLayout = new QVBoxLayout(odgovori);

            auto tekstOdgovora = upit.value("odgovor1").toString();
            QRadioButton* prvi = new QRadioButton(tekstOdgovora);
            tekstOdgovora = upit.value("odgovor2").toString();
            QRadioButton* drugi = new QRadioButton(tekstOdgovora);
            tekstOdgovora = upit.value("odgovor3").toString();
            QRadioButton* treci= new QRadioButton(tekstOdgovora);
            tekstOdgovora = upit.value("odgovor4").toString();
            QRadioButton* cetvrti = new QRadioButton(tekstOdgovora);
            tekstOdgovora = upit.value("odgovor5").toString();
            QRadioButton* peti = new QRadioButton(tekstOdgovora);

            groupLayout->addWidget(prvi);
            groupLayout->addWidget(drugi);
            groupLayout->addWidget(treci);
            groupLayout->addWidget(cetvrti);
            groupLayout->addWidget(peti);
            odgovori->setLayout(groupLayout);
            dialogLayout->addWidget(odgovori, 1, 0, 1, 1);

            brojTacnih = upit.value("brojTacnihOdgovora").toInt();
            prviTacan = upit.value("tacanOdgovor1").toInt();
            if(brojTacnih >= 2){
                drugiTacan = upit.value("tacanOdgovor2").toInt();
                if(brojTacnih == 3){
                    treciTacan = upit.value("tacanOdgovor3").toInt();
                }
            }

            QPushButton* odgovoriP = new QPushButton(dialog);
            odgovoriP->setText("Odgovori");
            dialogLayout->addWidget(odgovoriP, 6, 0, 1, 1);
            odgovoriP->show();
            connect(odgovoriP, &QPushButton::clicked, this, &MainWindow::checkAnswer);

            mainDialogLayout->addLayout(dialogLayout);
            dialog->setLayout(mainDialogLayout );
            dialog->show();
        }
    }
}

void MainWindow::openDialog(){
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender());
    int redniBroj  = buttonSender->text().toInt();
    brojPitanja = redniBroj;
    buttonSender->setEnabled(false);
    QSqlQuery upit(database);
    upit.prepare("SELECT * FROM PITANJA WHERE redniBroj=(:rb)");
    upit.bindValue(":rb", redniBroj);
    if(upit.exec()){
        if(upit.next()){
            dialog = new QWidget(this, Qt::Window);
            dialog->setWindowModality(Qt::ApplicationModal);

            QVBoxLayout* mainDialogLayout = new QVBoxLayout(dialog);
            QGridLayout* dialogLayout = new QGridLayout(dialog);
            QLabel* tekst = new QLabel(dialog);
            tekst->setText(upit.value("tekstPitanja").toString());
            dialogLayout->addWidget(tekst, 0, 0, 1, 1);
            tekst->show();

            brojTacnih = upit.value("brojTacnihOdgovora").toInt();
            prviTacan = upit.value("tacanOdgovor1").toInt();
            if(brojTacnih >= 2){
                drugiTacan = upit.value("tacanOdgovor2").toInt();
                if(brojTacnih == 3){
                    treciTacan = upit.value("tacanOdgovor3").toInt();
                }
            }

            QPushButton* odgovoriP = new QPushButton(dialog);
            odgovoriP->setText("Odgovori");
            dialogLayout->addWidget(odgovoriP, 6, 0, 1, 1);
            odgovoriP->show();
            connect(odgovoriP, &QPushButton::clicked, this, &MainWindow::checkAnswer);

            mainDialogLayout->addLayout(dialogLayout);
            dialog->setLayout(mainDialogLayout );
            dialog->show();
        }
    }
}

void MainWindow::checkAnswer(){
    //auto lay = odgovori->layout()->count();
    for(int i = 0; i < odgovori->layout()->count(); ++i){
        if(brojPitanja <= 5){
            QRadioButton* button = qobject_cast<QRadioButton*>(odgovori->layout()->itemAt(i)->widget());
            bool isChecked = button->isChecked();
            if(isChecked){
                if(i == prviTacan - 1){
                    qDebug() << "Prvi tacan";
                }else if(brojTacnih>=2 && i == drugiTacan -1){
                    qDebug() << "drugi tacan";
                }else if(brojTacnih==3 && i == treciTacan -1){
                    qDebug() << "treci tacan";
                }
            }
        }
    }
    dialog->deleteLater();
}

void MainWindow::pregled(){

    QSqlQueryModel* model = new QSqlQueryModel();
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Ime"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prezime"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Bodovi"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Datum"));

    QTableView* table = new QTableView();
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setModel(model);
    table->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


