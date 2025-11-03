#include "midterm_ui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Midterm_Ui w;
    w.show();
    return a.exec();
}
