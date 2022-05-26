#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QtWidgets>
#include <QString>

class MyWidget : public QMainWindow{
	Q_OBJECT
private:
	QLineEdit* txt1;
	QLineEdit* txt2;
	QLineEdit* txt3;
	
	QPushButton* btn1;
	QPushButton* btn2;
	
	QLabel* labis;

private slots:
	void slotBtn1();
	void slotBtn2();

public:
	MyWidget();
	~MyWidget();
};
#endif
