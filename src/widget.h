#pragma once

#include <QWidget>

// forward declare the automatically generated form class from QtDesigner
namespace Ui { class Widget; }

// create a widget that inherits from the same base class as the widget we
// designed in QtCreator.  This class will handle the UI business logic on
// behalf of the automatically generated widget class
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

// must include "slots" for these to be picked up by auto connection
private slots:
    // provide an implementation for the clicked() signal, which will be emitted
    // by the automatically-generated widget, naming convention to be automatically
    // connected is "on_${CONTROL_NAME}_${SIGNAL_NAME}"; in this case the
    // automatically-generated Widget has a member whose name is "pushButton"
    // which can emit the signal "clicked"
    void on_pushButton_clicked();

private:
    // add the automatically generated widget class as a member
    Ui::Widget *ui;
};