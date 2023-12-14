#include "cframe.h"
#include "ui_cframe.h"

Cframe::Cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cframe)
{
    ui->setupUi(this);
}

Cframe::~Cframe()
{
    delete ui;
}


void Cframe::on_reservar_clicked()
{

laboratorio *nuevolab =new laboratorio(ui->tipolaboratorio->currentText().toStdString(),ui->clase->text().toStdString(),ui->motivo->text().toStdString(),
                                       "docente",ui->comboBox->currentText().toStdString(),ui->nombre->text().toStdString(),ui->cuenta->text().toStdString(),
                                       ui->correo->text().toStdString(),5,ui->cuentas->text().toStdString(),
                                       ui->herramientas->text().toStdString(),ui->dateEdit->date().toString().toStdString(),ui->hora_inicio->currentText().toStdString(),
                                       ui->hora_final->currentText().toStdString());

labs.InsertarAlFinal(nuevolab);
labs.Guardar("DatosLaboratorios.xls");
}

