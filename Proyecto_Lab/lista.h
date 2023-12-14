#ifndef LISTA_H
#define LISTA_H
#include <fstream>
#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <nodo.h>
#include <laboratorio.h>

using std::ofstream;
using std::ios;
using std::string;

template<typename tipo>
class lista:public QMainWindow{
    friend class cframe;
private:
    nodo<tipo> *raizPtr;
    nodo<tipo> *NuevoNodo( const tipo & );
    int Cant;

public:
    lista();
    ~lista();

    void InsertarAlInicio(const tipo &);
    void InsertarAlFinal(const tipo &);
    bool EliminarDelInicio(tipo &);
    bool EliminarDelFinal(tipo&);
    bool Vacia();
    bool Guardar(string);
    bool GuardarRaiz(string);
    int Cantidad()const;
};

template<typename tipo>
nodo<tipo> *lista<tipo>::NuevoNodo(const tipo &dato)
{
    return new nodo<tipo>(dato);
}

template<typename tipo>
lista<tipo>::lista() : raizPtr(0), Cant(0){}

template<typename tipo>
lista<tipo>::~lista()
{
    if ( !Vacia() ){
        std::cout << "Destruyendo nodos ...\n";
        nodo< tipo > *actPtr = raizPtr;
        nodo< tipo > *tempPtr;

        for ( ; actPtr != 0; ){
            tempPtr = actPtr;
            std::cout << tempPtr->getDato()<< "\n";
            actPtr = actPtr->SigPtr;
            delete tempPtr;
        }
    }

    std::cout << "Se destruyeron todos los nodos\n\n";
}

template<typename tipo>
void lista<tipo>::InsertarAlInicio(const tipo &dato)
{
    nodo< tipo > *nuevoPtr = NuevoNodo( dato ); // nuevo nodo

    if ( Vacia() ){ // la Lista está vacía
        raizPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    }else{
        nuevoPtr->SigPtr = raizPtr; // apunta el nuevo nodo al nodo que antes era el primero
        raizPtr = nuevoPtr; // orienta primeroPtr hacia el nuevo nodo
    }
    Cant++;
}

template<typename tipo>
void lista<tipo>::InsertarAlFinal(const tipo &dato)
{
    nodo< tipo > *nuevoPtr = NuevoNodo( dato ); // nuevo nodo
    nodo< tipo > *actPtr = raizPtr;
    if ( Vacia() ){ // la Lista está vacía
        raizPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    }else{
        for( ; actPtr->SigPtr != 0; actPtr = actPtr->SigPtr);

        actPtr->SigPtr = nuevoPtr;
    }
    Cant++;
}

template<typename tipo>
bool lista<tipo>::EliminarDelInicio(tipo &dato)
{
    if ( Vacia() ){ // la Lista está vacía
        return false; // la eliminación no tuvo éxito
    }else{
        nodo< tipo > *tempPtr = raizPtr; // contiene tempPtr a eliminar
        raizPtr = raizPtr->SigPtr; // apunta al nodo que antes era el segundo
        dato = tempPtr->dato; // devuelve los datos que se van a eliminar
        delete tempPtr; // reclama el nodo que antes era el primero
        Cant--;
        return true;
    }
}

template<typename tipo>
bool lista<tipo>::EliminarDelFinal(tipo &dato)
{
    if ( Vacia() ){ // la Lista está vacía
        return false; // la eliminación no tuvo éxito
    }else{
        nodo< tipo > *tempPtr = raizPtr; // contiene tempPtr a eliminar
        if ( raizPtr->SigPtr == 0 ){ // la Lista tiene un elemento
            raizPtr = 0; // no hay nodos después de la eliminación
        }else{
            nodo< tipo > *actPtr = raizPtr;

            for ( ;actPtr->SigPtr->SigPtr != 0; actPtr = actPtr->SigPtr );

            tempPtr = actPtr->SigPtr;
            actPtr->SigPtr = 0; // ahora éste es el último nodo
        } // fin de else

        dato = tempPtr->dato; // devuelve el valor del nodo que antes era el último
        delete tempPtr; // reclama el nodo que antes era el último
        Cant--;
        return true;
    }
}

template<typename tipo>
bool lista<tipo>::Vacia()
{
    return raizPtr==0;
}

template<typename tipo>
bool lista<tipo>::Guardar(std::string Nombre)
{
    std::ofstream Archivo(Nombre.data(), std::ios::out | std::ios::app);
        if (!Archivo)
        {
            return false;
        }
        else
        {
            for (nodo<tipo> *actPtr = raizPtr; actPtr != 0; actPtr = actPtr->SigPtr)
            {
                if (typeid(*actPtr->dato) == typeid(laboratorio))
                {
                    Archivo << "Laboratorio Solicitado \t"
                            << "Clase Requerida\t"
                            << "Motivo de Uso\t"
                            << "Perfil\t"
                            << "Repetir\t"
                            << "Nombre Completo\t"
                            << "Numero de Cuenta\t"
                            << "Correo\t"
                            << "Cantidad de Integrantes\t"
                            << "Nombres y Numeros de Cuentas\t"
                            << "Equipo\t"
                            << "Fecha\t"
                            << "Horario de Inicio\t"
                            << "Horario de Fin\n"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getLabSolicitado() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getClaseRequerida() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getMotivoDeUso() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getPerfil() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getRepeticion() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getNombreCompleto() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getNumeroDeCuenta() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getCorreo() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getCantIntegrantes() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getNombresYNumerosExtra() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getEquipo() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getFecha() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getHorarioInicio() << "\t"
                            << dynamic_cast<laboratorio *>(actPtr->dato)->getHorarioFin() << "\n";
                }
            }
            Archivo.close();
            return true;
        }
}




template<typename tipo>
int lista<tipo>::Cantidad() const
{
    return Cant;
}

#endif // LISTA_H
