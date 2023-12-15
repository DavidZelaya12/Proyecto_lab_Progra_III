#include "laboratorio.h"

string laboratorio::getLabSolicitado()
{
    return labSolicitado;
}

string laboratorio::getClaseRequerida()
{
    return claseRequerida;
}

string laboratorio::getMotivoDeUso()
{
    return motivoDeUso;
}

string laboratorio::getPerfil()
{
    return perfil;
}

string laboratorio::getRepeticion()
{
    return repeticion;
}

string laboratorio::getNombreCompleto()
{
    return nombreCompleto;
}

string laboratorio::getNumeroDeCuenta()
{
    return numeroDeCuenta;
}

string laboratorio::getCorreo()
{
    return correo;
}

int laboratorio::getCantIntegrantes()
{
    return cantIntegrantes;
}

string laboratorio::getNombresYNumerosExtra()
{
    return nombresYNumerosExtra;
}

string laboratorio::getEquipo()
{
    return equipo;
}

const string laboratorio::getFecha()const
{
    return fecha;
}

string laboratorio::getHorarioInicio()
{
    return horarioInicio;
}

string laboratorio::getHorarioFin()
{
    return horarioFin;
}

string laboratorio::getReserva()
{
    return labSolicitado+" - "+horarioInicio+"-"+horarioFin+" - "+fecha;
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
}

laboratorio::~laboratorio()
{

}
