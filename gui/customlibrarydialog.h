#ifndef CUSTOMLIBRARYDIALOG_H
#define CUSTOMLIBRARYDIALOG_H

#include <QDialog>

namespace Ui {
class customlibrarydialog;
}

class customlibrarydialog : public QDialog
{
	Q_OBJECT

public:
	explicit customlibrarydialog(QWidget *parent = 0);
	~customlibrarydialog();

private slots:
	void on_addButton_clicked();

	void on_deleteButton_clicked();

private:
	Ui::customlibrarydialog *ui;
};

#endif // CUSTOMLIBRARYDIALOG_H
