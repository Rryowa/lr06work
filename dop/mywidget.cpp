#include "mywidget.h"

MyWidget::~MyWidget(){
}
void MyWidget::slotBtn1(){
	QString s1, s2, s3;
	QString tmp1;
	s1=txt1->text();
	s2=txt2->text();
	s3 = s1 + s2;
	txt3->setText(s3);
	txt3->setText(tmp1.setNum(s3.length()));
}

void MyWidget::slotBtn2(){
	txt1 -> setText("");
	txt2 -> setText("");
	txt3 -> setText("");
}

MyWidget::MyWidget(){
	this -> resize(460,350);
	
	txt1 = new QLineEdit(this);
	txt2 = new QLineEdit(this);
	txt3 = new QLineEdit(this);
	txt3 -> setReadOnly(true);
	
	btn1 = new QPushButton("Calc",this);
	btn2 = new QPushButton("Clear",this);

	labis = new QLabel("+",this);
	
	txt1 -> move(30,30); txt1 -> resize(380,50);
	labis -> move(210,100); labis -> resize(10,10);
	txt2 -> move(30,130); txt2 -> resize(380,50);
	
	btn1 -> move(30,230); btn1 -> resize(150,50);
	txt3 -> move(200,230); txt3 -> resize(50,50);
	btn2 -> move(270,230); btn2 -> resize(150,50);
	
	connect(btn1, SIGNAL(clicked()), this, SLOT(slotBtn1()));
	connect(btn2, SIGNAL(clicked()), this, SLOT(slotBtn2()));
}
