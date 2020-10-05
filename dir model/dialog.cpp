#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model=new QDirModel(this);
    model->setReadOnly(false);

    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);

    ui->treeView->setModel(model);

    QModelIndex index=model->index("C:/");

    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //make dir
    QModelIndex index=ui->treeView->currentIndex();
    if(!index.isValid()) return;

    QString ime = QInputDialog::getText(this,"Unesi ime direktorija","Direktorij");
    if(ime.isEmpty()) return;
    model->mkdir(index,ime);

}

void Dialog::on_pushButton_2_clicked()
{
    //delete
    QModelIndex index=ui->treeView->currentIndex();
    if(!index.isValid()) return;

    if(model->fileInfo(index).isDir()){
        model->rmdir(index);

   }
   else{
        model->remove(index);
   }
