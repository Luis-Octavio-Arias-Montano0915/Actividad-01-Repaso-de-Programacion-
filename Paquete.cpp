#include "Paquete.h"

Paquete::Paquete(Nodo *nodoInicio)
{
    h=nodoInicio;
}


Paquete::Paquete()
{
    h=nullptr; //Asigna Nulo a h
}

void Paquete::eliminarInicio()
{
    Nodo *tmp=h;

    if(!tmp)
        cout<<"Lista vacia"<<endl;
        else
            {
                h=h->sig;
                delete tmp;

                    delete tmp;
            }
}

void Paquete::eliminarInPeso()
{
    Nodo *tmp=h;

    if(!tmp)
        cout<<"Lista vacia"<<endl;
        else
            {
                h=h->sig;
                delete tmp;

                    delete tmp;
            }
}

void Paquete::insertarInicio(int d)
{
    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;
    h=aux;
    cout<<"\n"<<endl;
}

void Paquete::InsertarInPeso(int e)
{
    Paquete *temp=new Paquete();

    Nodo *aux=new Nodo(e, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;
    h=aux;
    cout<<"\n"<<endl;

}

void Paquete::mostrar(void)
{
    Nodo *tmp=h;

    if(tmp==nullptr)
        cout<<"Lista vacia..."<<endl;
    else
        cout<<"PAQUETES PRESENTES "<<endl;
        cout<<"ID:"<<endl;
        while(tmp)
    {
        cout<<tmp->dato<<", ";
        tmp=tmp->sig;
    }
    return;
}

void Paquete::mostrareso(void)
{
    Nodo *temp=h;

    if(temp==nullptr)
        cout<<"Lista vacia..."<<endl;
    else
        cout<<"\nSu Peso: "<<endl;
        while(temp)
    {
        cout<<temp->dato<<", ";
        temp=temp->sig;
    }
    return;
}

bool Paquete::estaVacia()
{
    return h==nullptr;
}
