#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include <lista.h>
#include <laboratorio.h>
#include <lista.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Cframe; }
QT_END_NAMESPACE

class Cframe : public QMainWindow
{
    Q_OBJECT

public:
    Cframe(QWidget *parent = nullptr);
    ~Cframe();

private slots:
    void on_reservar_clicked();

private:

    lista <laboratorio*> labs;
    Ui::Cframe *ui;
};
#endif // CFRAME_H
