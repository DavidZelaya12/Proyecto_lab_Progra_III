#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>
#include <string>

template<typename tipo> class lista;
template<typename tipo>
class laboratorio {
    friend lista<tipo>;
    friend class cframe;
private:
    std::string labSolicitado;
    std::string claseRequerida;
    std::string motivoDeUso;
    std::string perfil;
    std::string repeticion;
    std::string nombreCompleto;
    std::string numeroDeCuenta;
    std::string correo;
    int cantIntegrantes;
    std::string nombresYNumerosExtra;
    std::string equipo;
    std::string fecha;
    std::string horarioInicio;
    std::string horarioFin;
    tipo dato;
    laboratorio<tipo>* SigPtr;

public:
    laboratorio(const std::string& labSolicitado, const std::string& claseRequerida, const std::string& motivoDeUso,
                const std::string& perfil, const std::string& repeticion, const std::string& nombreCompleto,
                const std::string& numeroDeCuenta, const std::string& correo, int cantIntegrantes,
                const std::string& nombresYNumerosExtra, const std::string& equipo, const std::string& fecha,
                const std::string& horarioInicio, const std::string& horarioFin, const tipo& dato);

    tipo getDato() const;
};

template<typename tipo>
laboratorio<tipo>::laboratorio(const std::string& labSolicitado, const std::string& claseRequerida,
                               const std::string& motivoDeUso, const std::string& perfil,
                               const std::string& repeticion, const std::string& nombreCompleto,
                               const std::string& numeroDeCuenta, const std::string& correo,
                               int cantIntegrantes, const std::string& nombresYNumerosExtra,
                               const std::string& equipo, const std::string& fecha,
                               const std::string& horarioInicio, const std::string& horarioFin,
                               const tipo& dato)
    : labSolicitado(labSolicitado), claseRequerida(claseRequerida), motivoDeUso(motivoDeUso),
      perfil(perfil), repeticion(repeticion), nombreCompleto(nombreCompleto),
      numeroDeCuenta(numeroDeCuenta), correo(correo), cantIntegrantes(cantIntegrantes),
      nombresYNumerosExtra(nombresYNumerosExtra), equipo(equipo), fecha(fecha),
      horarioInicio(horarioInicio), horarioFin(horarioFin), dato(dato), SigPtr(nullptr) {}

template<typename tipo>
tipo laboratorio<tipo>::getDato() const {
    return dato;
}


#endif // LABORATORIO_H
