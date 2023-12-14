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
    nodo<laboratorio*> *raizPtr;

    int indexActual(string posicion);
    string horasdisponibles[9] = {"06:45", "08:10", "09:55", "11:15", "13:20", "14:40", "16:00", "17:20", "18:40"};

    bool validarFecha(string laboratorioo,int index1, int index2,string fecha);


    Ui::Cframe *ui;
};
#endif // CFRAME_H
