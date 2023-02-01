#include "PaqueteString.h"

PaqueteStr::PaqueteStr(NodoStr *nodoInicio)
{
    hStr=nodoInicio;
}

PaqueteStr::PaqueteStr()
{
    hStr=nullptr;
}

void PaqueteStr::eliminarInOrigen()
{
    NodoStr *tmp=hStr;

    if(!tmp)
        cout<<"Lista vacia"<<endl;
        else
            {
                hStr=hStr->nex;
                delete tmp;

                    delete tmp;
            }
}

void PaqueteStr::eliminarInDestino()
{
    NodoStr *tmp=hStr;

    if(!tmp)
        cout<<"Lista vacia"<<endl;
        else
            {
                hStr=hStr->nex;
                delete tmp;

                    delete tmp;
            }
}

void PaqueteStr::InsertarInOrigen(string org)
{
    NodoStr *aux=new NodoStr(org, nullptr);
    NodoStr *tmp=hStr;

    aux->nex=tmp;
    hStr=aux;
    cout<<"\n"<<endl;
}

void PaqueteStr::InsertarInDestino(string d)
{
    PaqueteStr *temp=new PaqueteStr();

    NodoStr *auxStr=new NodoStr(d, nullptr);
    NodoStr *tmp=hStr;

    auxStr->nex=tmp;
    hStr=auxStr;
    cout<<"\n"<<endl;
}

void PaqueteStr::mostrarOri(void)
{
    NodoStr *tmp=hStr;

    if(tmp==nullptr)
        cout<<"Lista vacia..."<<endl;
    else
        cout<<"\nOrigen: "<<endl;
        while(tmp)
    {
        cout<<tmp->val<<", ";
        tmp=tmp->nex;
    }
    return;
}

void PaqueteStr::mostrarDes(void)
{
    NodoStr *temp=hStr;

    if(temp==nullptr)
        cout<<"Lista vacia..."<<endl;
    else
        cout<<"\nDestino: "<<endl;
        while(temp)
    {
        cout<<temp->val<<", ";
        temp=temp->nex;
    }
    return;
}

bool PaqueteStr::StEstaVacia()
{
    return hStr==nullptr;
}
