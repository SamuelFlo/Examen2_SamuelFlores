#ifndef SELECCION_H
#define SELECCION_H
#include <string>
#include <fstream>

using namespace std;

class Seleccion{
  private:
    string nombreseleccion,maximogoleador;
    int partidosganados,perdidos,empatados,golesanotados;
  public:
    Seleccion();
    Seleccion(string,int,int,int,int,string);
    //getters
    string getNombreSeleccion();
    int getPartidosGanados();
    int getPerdidos();
    int getEmpatados();
    int getGolesAnotados();
    string getMaximoGoleador();
    //setters
    void setNombreSeleccion(string);
    void setPartidosGanados(int);
    void setPerdidos(int);
    void setEmpatados(int);
    void setGolesAnotados(int);
    void setMaximoGoleador(string);

    //Guardar
    void write();
    void leer(ifstream&);
};
#endif
