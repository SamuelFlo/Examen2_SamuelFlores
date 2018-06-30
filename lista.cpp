#include "lista.h"
#include "nodo.h"
#include "seleccion.h"
#include <iostream>
using namespace std;

Lista::Lista(){}

void Lista::agregar(Nodo* no){
  if(sig==NULL){
    sig=no;
  }else{
    Nodo* t=sig;
    while(t->getNodo() != NULL){
      t = t->getNodo();
    }
    t->setNodo(no);
  }
}
void Lista::listar(){
    cout<<sig->getSele()->getNombreSeleccion();

}
void Lista::siguiente(Nodo* no){
  no= new Nodo(NULL);
}
