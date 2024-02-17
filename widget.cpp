#include "widget.h"
#include "ui_widget.h"
#include "QClipboard"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_CopyButton_clicked()
{
    QClipboard *cb = QApplication::clipboard();
    cb->setText("git commit -m \"" + ui->lineEdit->text() + "\"");
    ui->lineEdit->clear();
}

void Widget::on_lineEdit_textChanged(const QString &arg1)
{
    ui->label->setNum(ui->lineEdit->text().size());

    if(ui->lineEdit->text().size() > 72)
    {
        ui->CopyButton->setEnabled(false);
        ui->lineEdit->setStyleSheet("background:#ffd7d4;");
    }
    else
    {
        ui->CopyButton->setEnabled(true);
        ui->lineEdit->setStyleSheet("background:#ffffff;");
    }
}
