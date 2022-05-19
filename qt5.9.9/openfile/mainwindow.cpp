#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString fileFull, fileName, filePath,fileSuffix;
    QFileInfo fileinfo;
    fileFull = QFileDialog::getOpenFileName(this,tr("file"),"/",tr("text(*.txt)"));  //获取整个文件名

    //获取文件信息
    fileinfo = QFileInfo(fileFull);

    //获取文件名字
    fileName = fileinfo.fileName();

    //获取文件后缀
    fileSuffix = fileinfo.suffix();

    //获取文件绝对路径
    filePath = fileinfo.absolutePath();
    if(!fileFull.isNull())
    {
       QFile file(fileFull);
       if(!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this,tr("Error"),tr("read file error:&1").arg(file.errorString()));
            return;
        }
        QTextStream in(&file);
        QApplication::setOverrideCursor(Qt::WaitCursor);

        dialog = new Dialog(this);
        dialog->ui->lineEdit->setText(fileFull);
        dialog->ui->lineEdit_2->setText(fileName);
        dialog->ui->textEdit->setPlainText(in.readAll());

        QApplication::restoreOverrideCursor();
        dialog->show();
    }
    else
    {
//       qDebug()<<"cancel";
    }
//            FileDialog::getOpenFileName(this,
//                                                                tr("Open File"),
//                                                                "/",
//                                                                tr("All Files (*.*)"));
//                QDesktopServices::openUrl(QUrl::fromLocalFile(QFileInfo(fileName).absoluteFilePath()));

}
