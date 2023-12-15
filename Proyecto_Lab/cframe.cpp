#include "cframe.h"
#include "ui_cframe.h"
#include <vector>

using namespace std;

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

    int integrantes = ui->integrantes->value();
    string perfil;
    if(ui->administrativo->isChecked()){
        perfil ="Administrativo";
    }else if(ui->alumno->isChecked()){
        perfil = "Alumno";
    }else if(ui->docente->isChecked()){
        perfil = "Docente";
    }
    else{
        perfil = "Educacion continua";
    }




    laboratorio *nuevolab =new laboratorio(ui->tipolaboratorio->currentText().toStdString(),
                                           ui->clase->text().toStdString(),
                                           ui->motivo->text().toStdString(),
                                           perfil,
                                           ui->comboBox->currentText().toStdString(),
                                           ui->nombre->text().toStdString(),
                                           ui->cuenta->text().toStdString(),
                                           ui->correo->text().toStdString(),
                                           integrantes,
                                           ui->cuentas->text().toStdString(),
                                           ui->herramientas->text().toStdString(),
                                           ui->dateEdit->date().toString().toStdString(),
                                           ui->hora_inicio->currentText().toStdString(),
                                           ui->hora_final->currentText().toStdString());

    if(validarFecha(nuevolab->getLabSolicitado(),
                    ui->hora_inicio->currentIndex(),
                    ui->hora_final->currentIndex(),
                    ui->dateEdit->date().toString().toStdString())){

        labs.InsertarAlFinal(nuevolab);
    }

}

int Cframe::indexActual(string posicion)
{
    string horas[] = {"06 : 45", "08 : 10", "09 : 55", "11 : 15", "13 : 20", "14 : 40", "16 : 00", "17 : 20", "18 : 40"};

    for (int i=0; i < 10 ;i++) {
        if(posicion == horas[i] ){
            return i;
        }
    }
    return 0;

}

bool Cframe::validarFecha(string laboratorioo,int index1, int index2,string fecha)
{

    int currentindex1 = ui->hora_inicio->currentIndex();
    int currentindex2 = ui->hora_final->currentIndex();

    if(currentindex1>currentindex2){
        QMessageBox::information(nullptr, "Error", "Ingrese una fecha valida");
        return false;
    }

    raizPtr = labs.raizPtr;

    for (;
         raizPtr != nullptr
         ;raizPtr= raizPtr->SigPtr ) {

        //QMessageBox::information(nullptr, "Error", "Yo Creo que este for no se está eejecutando");
        std::cout << laboratorioo;
        if( raizPtr->getDato()->getLabSolicitado() == laboratorioo && raizPtr->getDato()->getFecha() == fecha){
            int inicio = indexActual(raizPtr->getDato()->getHorarioInicio());
            int final  = indexActual(raizPtr->getDato()->getHorarioFin());



            if(index1 >= inicio && index1 <=final ){
                QMessageBox::information(nullptr, "Error", "Fecha ocupada");
                return false;
            }

            if(index2 >=final && index2<=final){
                QMessageBox::information(nullptr, "Error", "Fecha ocupada");
                return false;
            }
        }

    }

    return true;

}


void Cframe::on_tipolaboratorio_currentIndexChanged(const QString &arg1)
{

}

