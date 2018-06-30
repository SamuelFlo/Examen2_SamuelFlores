#include "nodo.h"
#include "lista.h"
#include "seleccion.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){
  Seleccion* sel;
  int cont=0;
  Nodo* nodo;
  Lista* lista;
  int opcion;
  string nombreseleccion;
  int partidosganados;
  int perdidos;
  int empatados;
  int golesanotados;
  string maximogoleador;
  bool seguir=true;
  while(seguir){
    cout<<"1. Agregar una seleccion"<<endl;
    cout<<"2. Listar"<<endl;
    cout<<"3. Eliminar"<<endl;
    cout<<"4. Guardar una seleccion"<<endl;
    cout<<"5. Abrir binario"<<endl;
    cout<<"6. Salir"<<endl;
    cin>>opcion;
    switch(opcion){
      case 1:
      {
        cout<<"Ingrese el nombre de la seleccion: "<<endl;
        cin>>nombreseleccion;
        cout<<"Ingrese los partidos ganados: "<<endl;
        cin>>partidosganados;
        cout<<"Ingrese los partidos perdidos: "<<endl;
        cin>>perdidos;
        cout<<"Ingrese los partidos empatados: "<<endl;
        cin>>empatados;
        cout<<"Ingrese los goles anotados: "<<endl;
        cin>>golesanotados;
        cout<<"Ingrese el maximo goleador: "<<endl;
        cin>>maximogoleador;
        sel=new Seleccion(nombreseleccion,partidosganados,perdidos,empatados,golesanotados,maximogoleador);
        nodo= new Nodo(sel);
        lista=new Lista();
        lista->agregar(nodo);

        break;
      }
      case 2:

        break;
      case 3:
        break;
      case 4:
      {
        ofstream fsalida("texto.dat", ios::out | ios::binary | ios::app);
        fsalida.write(reinterpret_cast<char*>(&sel),sizeof(Seleccion*));
        fsalida.close();
        cout<<"GUARDADO"<<endl;

        break;
      }
      case 5:
      {
        break;
      }
      case 6:
        seguir=false;
        break;
    }
  }


  return 0;
}
