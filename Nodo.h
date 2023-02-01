#ifndef NODO_H
#define NODO_H
#include <string>
class Nodo
{
public:
    Nodo();
    Nodo(int, Nodo*);
    int dato; //variable para almacenar el valor del nodo
    Nodo *sig;

};
#endif // NODO_H
