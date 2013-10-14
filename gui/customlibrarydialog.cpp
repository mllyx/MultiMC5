#include "customlibrarydialog.h"
#include "ui_customlibrarydialog.h"

customlibrarydialog::customlibrarydialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::customlibrarydialog)
{
	ui->setupUi(this);
}

customlibrarydialog::~customlibrarydialog()
{
	delete ui;
}

void customlibrarydialog::on_addButton_clicked()
{

}

void customlibrarydialog::on_deleteButton_clicked()
{

}
