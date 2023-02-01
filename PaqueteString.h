#ifndef PAQUETESTRING_H
#define PAQUETESTRING_H
#include "NodoStr.h"
#include <iostream>
#include <string>
using namespace std;

class PaqueteStr
{
private:
    bool StEstaVacia();
public:
    PaqueteStr();
    ~PaqueteStr();

    PaqueteStr(NodoStr*);
    NodoStr *hStr;

    void InsertarInOrigen(string);
    void InsertarInDestino(string);

    void eliminarInOrigen();
    void eliminarInDestino();

    void mostrarOri(void);
    void mostrarDes(void);
};
#endif // PAQUETESTRING_H
