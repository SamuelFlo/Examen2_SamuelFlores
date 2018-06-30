#ifndef LISTA_H
#define LISTA_H
#include <string>
#include "nodo.h"
using namespace std;

class Lista{
private:
  Nodo* sig;
  int posicion;
public:
  Lista();
  void agregar(Nodo*);
  void listar();
  void eliminar(Nodo*);
  void siguiente(Nodo*);

};


#endif
