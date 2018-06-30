#include "seleccion.h"
#include <iostream>
#include <string>
using namespace std;

Seleccion::Seleccion(){}
Seleccion::Seleccion(string pnombreseleccion, int ppartidosganados,int pperdidos, int pempatados, int pgolesanotados, string pmaximogoleador){
  nombreseleccion=pnombreseleccion;
  partidosganados=ppartidosganados;
  perdidos=pperdidos;
  empatados=pempatados;
  golesanotados=pgolesanotados;
  maximogoleador=pmaximogoleador;
}
//getters
string Seleccion::getNombreSeleccion(){
  return nombreseleccion;
}
int Seleccion::getPartidosGanados(){
  return partidosganados;
}
int Seleccion::getPerdidos(){
  return perdidos;
}
int Seleccion::getEmpatados(){
  return empatados;
}
int Seleccion::getGolesAnotados(){
  return golesanotados;
}
string Seleccion::getMaximoGoleador(){
  return maximogoleador;
}
//setters
void Seleccion::setNombreSeleccion(string pnombreseleccion){
  nombreseleccion=pnombreseleccion;
}
void Seleccion::setPartidosGanados(int ppartidosganados){
  partidosganados=ppartidosganados;
}
void Seleccion::setPerdidos(int pperdidos){
  perdidos=pperdidos;
}
void Seleccion::setEmpatados(int pempatados){
  empatados=pempatados;
}
void Seleccion::setGolesAnotados(int pgolesanotados){
  golesanotados=pgolesanotados;
}
void Seleccion::setMaximoGoleador(string pmaximogoleador){
  maximogoleador=pmaximogoleador;
}
void Seleccion::write(){
  
}
void Seleccion::leer(ifstream& in){

}
