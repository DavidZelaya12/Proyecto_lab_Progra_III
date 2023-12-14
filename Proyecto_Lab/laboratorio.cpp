#include "laboratorio.h"

const string &laboratorio::getLabSolicitado() const
{
    return labSolicitado;
}

const string &laboratorio::getClaseRequerida() const
{
    return claseRequerida;
}

const string &laboratorio::getMotivoDeUso() const
{
    return motivoDeUso;
}

const string &laboratorio::getPerfil() const
{
    return perfil;
}

const string &laboratorio::getRepeticion() const
{
    return repeticion;
}

const string &laboratorio::getNombreCompleto() const
{
    return nombreCompleto;
}

const string &laboratorio::getNumeroDeCuenta() const
{
    return numeroDeCuenta;
}

const string &laboratorio::getCorreo() const
{
    return correo;
}

int laboratorio::getCantIntegrantes() const
{
    return cantIntegrantes;
}

const string &laboratorio::getNombresYNumerosExtra() const
{
    return nombresYNumerosExtra;
}

const string &laboratorio::getEquipo() const
{
    return equipo;
}

const string &laboratorio::getFecha() const
{
    return fecha;
}

const string &laboratorio::getHorarioInicio() const
{
    return horarioInicio;
}

const string &laboratorio::getHorarioFin() const
{
    return horarioFin;
}

laboratorio::laboratorio()
{
    labSolicitado = "";
    claseRequerida = "";
    motivoDeUso = "";
    perfil = "";
    repeticion = "";
    nombreCompleto = "";
    numeroDeCuenta = "";
    correo = "";
    cantIntegrantes = 0;
    nombresYNumerosExtra = "";
    equipo = "";
    fecha = "";
    horarioInicio = "";
    horarioFin = "";
}

laboratorio::laboratorio(std::string labSolicitado, std::string claseRequerida, std::string motivoDeUso, std::string perfil, std::string repeticion, std::string nombreCompleto, std::string numeroDeCuenta, std::string correo, int cantIntegrantes, std::string nombresYNumerosExtra, std::string equipo, std::string fecha, std::string horarioInicio, std::string horarioFin)
{
    this->labSolicitado = labSolicitado;
    this->claseRequerida = claseRequerida;
    this->motivoDeUso = motivoDeUso;
    this->perfil = perfil;
    this->repeticion = repeticion;
    this->nombreCompleto = nombreCompleto;
    this->numeroDeCuenta = numeroDeCuenta;
    this->correo = correo;
    this->cantIntegrantes = cantIntegrantes;
    this->nombresYNumerosExtra = nombresYNumerosExtra;
    this->equipo = equipo;
    this->fecha = fecha;
    this->horarioInicio = horarioInicio;
    this->horarioFin = horarioFin;
    this->next = nullptr;
}

laboratorio::~laboratorio()
{

}
