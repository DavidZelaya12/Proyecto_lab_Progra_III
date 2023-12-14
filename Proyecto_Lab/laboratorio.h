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
    const string &getLabSolicitado() const;
    const string &getClaseRequerida() const;
    const string &getMotivoDeUso() const;
    const string &getPerfil() const;
    const string &getRepeticion() const;
    const string &getNombreCompleto() const;
    const string &getNumeroDeCuenta() const;
    const string &getCorreo() const;
    int getCantIntegrantes() const;
    const string &getNombresYNumerosExtra() const;
    const string &getEquipo() const;
    const string &getFecha() const;
    const string &getHorarioInicio() const;
    const string &getHorarioFin() const;
};

#endif // LABORATORIO_H
