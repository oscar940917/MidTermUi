#ifndef MIDTERM_UI_H
#define MIDTERM_UI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Midterm_Ui;
}
QT_END_NAMESPACE

class Midterm_Ui : public QMainWindow
{
    Q_OBJECT

public:
    Midterm_Ui(QWidget *parent = nullptr);
    ~Midterm_Ui();

private:
    Ui::Midterm_Ui *ui;
};
#endif // MIDTERM_UI_H
