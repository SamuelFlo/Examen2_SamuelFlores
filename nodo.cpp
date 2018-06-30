#include "nodo.h"
#include "seleccion.h"

Nodo::Nodo(){}

Nodo::Nodo(Seleccion* sele){

}
Nodo* Nodo::getNodo(){
  return nodo;
}

Seleccion* Nodo:: getSele(){
  return seleccion;
}
void Nodo::setNodo(Nodo* pnodo){
  nodo=pnodo;
}
void Nodo::setSeleccion(Seleccion* sele){
  seleccion=sele;
}
