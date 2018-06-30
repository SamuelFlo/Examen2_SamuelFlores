#ifndef NODO_H
#define NODO_H
#include <string>
#include "seleccion.h"
using namespace std;

class Nodo{
private:
  Nodo* nodo;
  Seleccion* seleccion;
  public:
    Nodo();
    Nodo(Seleccion*);

    //getter
    Nodo* getNodo();
    Seleccion* getSele();
    //setters

    void setNodo(Nodo*);
    void setSeleccion(Seleccion*);




};


#endif
