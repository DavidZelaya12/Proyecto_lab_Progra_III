#ifndef LISTA_H
#define LISTA_H
#include <fstream>
#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <nodo.h>

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
int lista<tipo>::Cantidad() const
{
    return Cant;
}

#endif // LISTA_H
