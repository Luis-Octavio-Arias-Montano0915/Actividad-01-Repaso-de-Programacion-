#include <iostream>
#include <fstream> //Funciones de lectura y escritura dentro del .txt
#include <locale.h>
#include <windows.h>
#include "Nodo.h"
#include "NodoStr.h"
#include "Paquete.h"
#include "PaqueteString.h"

using namespace std;

int main()
{
    int menu;
    int insertar, pes;
    Paquete *paq=new Paquete();
    Paquete *paqpeso=new Paquete();
    PaqueteStr *paqorigen=new PaqueteStr();
    PaqueteStr *paqdestino=new PaqueteStr();
    string origen, destino;

    do
    {

        cout<<"\n\t**********PAQUETERIA ARIAS**********"<<endl;
        cout<<"\nDigite un numero para seleccionar la operacion que desea realizar: \n"<<endl;
        cout<<"1. Agregar un Paquete \t\t\t2. Eliminar Paquete"<<endl;
        cout<<"3. Mostrar Todos los paquetes \t\t4. Guardar Registros(txt)"<<endl;
        cout<<"\t\t5. Recuperar Registros(txt)"<<endl;
        cin>>menu;
        system("cls");
        switch(menu)
        {
        case 1: //Agregar Paquete
            {
                    system("cls");
                    cout<<"\tINSERTAR AL INICIO\n\n";
                    cout<<"Digite el id del producto: "<<endl;
                    cin>>insertar;
                    paq->insertarInicio(insertar);
                    cout<<"Ponga el peso del producto (en Kg): " <<endl;
                    cin>>pes;
                    paqpeso->InsertarInPeso(pes);
                    cout<<"El origen del producto: "<<endl;
                    cin>>origen;
                    paqorigen->InsertarInOrigen(origen);
                    cout<<"Digite el Destino del producto: "<<endl;
                    cin>>destino;
                    paqdestino->InsertarInDestino(destino);
                    system("pause");
                    system("cls");
            }
            break; //Fin de Agregar Paquete
        case 2: //Eliminar Paquete
            {
                system("cls");
                cout<<"Se ha eliminado el primer paquete de la lista: "<<endl;
                cout<<"Puede verificar mostrando la lista"<<endl;
                paq->eliminarInicio();
                paqpeso->eliminarInPeso();
                paqorigen->eliminarInOrigen();
                paqdestino->eliminarInDestino();
                system("pause");
                system("cls");
                cout<<"\n";

            }
            break;
        case 3: //Mostrar Todo
            {
                paq->mostrar();
                paqpeso->mostrareso();
                paqorigen->mostrarOri();
                paqorigen->mostrarDes();
            }
            break;
        case 4: //Guardar
            {
                cout<<"SE HA CREADO UN ARCHIVO TXT con todos los DATOS\n\n";
                ofstream Archivo("Datos.txt",ios::app); /*ofstream crea un objeto para esvritura en el archivo llamado "Archivo"
                ios::app = entrada y salida de datos */
                Archivo<<"ID:"<<insertar<<"\tPeso"<<pes<<"\tOrigen:"<<origen; /* se va escribiendo en el archivo creado campo
                por campo, separado por un delimitador*/
                Archivo.close();

            }
            break;
        case 5: //Recuperar
            {
                ifstream arc("Datos.txt"); //Abre el archivo Datos en formato Lectura
                if(!arc.good()) /*good (libreria fstream) que verifica si hubo problema
                    al abrir el archivo a traves de true false*/
                {
                    cout<<"No existe el archivo...\n";
                }
                else{
                        cout<<"Se han recuperado los datos";
                    }
            }
            break;
            default:cout<<"Error, esa no es una opcion del menu\n";
        } //Fin del switch
    }while(menu!=6);
    return menu;
}
