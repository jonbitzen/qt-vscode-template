#include "widget.h"

// include the automatically generated header for the form we made in QtDesigner
#include "./ui_widget.h"

#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // initialize the form we created in QtDesigner
    ui->setupUi(this);

    // connect the slots we created to signals in our automatically-generated
    // widget
    QMetaObject::connectSlotsByName(this);

    // OR connect them manually, using the signal/slot API
    // connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked() {
    std::cout << "button clicked" << std::endl;
}