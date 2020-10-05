#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QtSql/QSqlDatabase>
#include <QLineEdit>
#include <vector>
#include <QPushButton>
#include <QGroupBox>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMenu* startMenu;
    QAction* loginWindowAction;
    QAction* loginAction;
    QAction* pregledAction;
    QSqlDatabase database;
    QWidget* loginWindow;
    QWidget* dialog;
    QGroupBox* odgovori;
    QWidget* pregledWindow;
   // int brojTacnih{0};
    int prviTacan;
    int drugiTacan;
    int treciTacan;
    int brojPitanja;

    std::vector<QPushButton*> buttons;

    QLineEdit* kImeT;
    QLineEdit* sifraT;


private slots:
    void logIn();
    void checkLogin();
    void openRadioDialog();
    void openDialog();
    void checkAnswer();
    void pregled();
};

#endif // MAINWINDOW_H
