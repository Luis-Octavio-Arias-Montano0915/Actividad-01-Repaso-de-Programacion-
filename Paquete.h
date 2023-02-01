#ifndef PAQUETE_H
#define PAQUETE_H
#include "Nodo.h"

#include <iostream>
#include <string>

using namespace std;

class Paquete
{
private:
    bool estaVacia();
public:
    Paquete(); //Constructor
    ~Paquete(); //Destructor


    Paquete(Nodo*);

    Nodo *h;

    //Insertar cada tipo de dato
    void insertarInicio(int);
    void InsertarInPeso(int);

    //Eliminar cada tipo de dato
    void eliminarInicio();
    void eliminarInPeso();


    //Metodos de mostrar
    void mostrar(void);
    void mostrareso(void);


    void guardar();
    void recuperar();

};
#endif // PAQUETE_H
