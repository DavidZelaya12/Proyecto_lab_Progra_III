#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>
#include <QDateEdit>
using std::string;

class laboratorio
{
private:
    string labSolicitado;
    string claseRequerida;
    string motivoDeUso;
    string perfil;
    string repeticion;
    string nombreCompleto;
    string numeroDeCuenta;
    string correo;
    int cantIntegrantes;
    string nombresYNumerosExtra;
    string equipo;
    string fecha;
    string horarioInicio;
    string horarioFin;

public:
    laboratorio();
    laboratorio(string labSolicitado, string claseRequerida, string motivoDeUso, string perfil,
                string repeticion, string nombreCompleto, string numeroDeCuenta, string correo,
                int cantIntegrantes, string nombresYNumerosExtra, string equipo, string fecha,
                string horarioInicio, string horarioFin);
    ~laboratorio();
    string getLabSolicitado() ;
    string getClaseRequerida() ;
    string getMotivoDeUso() ;
    string getPerfil() ;
    string getRepeticion() ;
    string getNombreCompleto() ;
    string getNumeroDeCuenta() ;
    string getCorreo() ;
    int getCantIntegrantes() ;
    string getNombresYNumerosExtra() ;
    string getEquipo() ;
    string getFecha() ;
    string getHorarioInicio() ;
    string getHorarioFin() ;

    string getReserva();
};

#endif // LABORATORIO_H
