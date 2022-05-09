#include "mywidget.h"
MyWidget::~MyWidget(){
}
void MyWidget::slotBtn1(){
	double d;
	double e;
	QString tmp;
	
	d=txt1->text().toDouble();
	e=txt2->text().toDouble();
	
	d = pow(d, e);
	txt3->setText(tmp.setNum(d));
}

void MyWidget::slotBtn2(){
	txt1 -> setText("");
	txt2 -> setText("");
	txt3 -> setText("");
}

MyWidget::MyWidget(){
	this -> resize(300,150);
	
	txt1 = new QLineEdit(this);
	txt2 = new QLineEdit(this);
	txt3 = new QLineEdit(this);
	
	btn1 = new QPushButton("Calculate",this);
	btn2 = new QPushButton("Clear",this);
	
	label = new QLabel("Stepenator", this);
	labis = new QLabel("^",this);
	equal = new QLabel("=",this);
	
	label -> move(120, -5); label -> resize(80, 40);
	labis -> move(118,25); labis -> resize(50,40);
	equal -> move(180,35); labis -> resize(40,40);
	
	txt1 -> move(70,30); txt1 -> resize(40,40);
	txt2 -> move(134,30); txt2 -> resize(40,40);
	txt3 -> move(195,30); txt3 -> resize(40,40);
	txt3 -> setReadOnly(true);
	
	btn1 -> move(70,80); btn1 -> resize(80,50);
	btn2 -> move(155,80); btn2 -> resize(80,50);
	
	connect(btn1, SIGNAL(clicked()), this, SLOT(slotBtn1()));
	connect(btn2, SIGNAL(clicked()), this, SLOT(slotBtn2()));
}
