#include "midterm_ui.h"
#include "ui_midterm_ui.h"

Midterm_Ui::Midterm_Ui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Midterm_Ui)
{
    ui->setupUi(this);
}

Midterm_Ui::~Midterm_Ui()
{
    delete ui;
}
