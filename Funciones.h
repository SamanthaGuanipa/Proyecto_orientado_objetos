#ifndef FUNCIONES_H_
#define FUNCIONES_H_


#include<iostream>
#include <string> 
#include <sstream>
#include "Usuario.h"
#include "Organizacion.h"

using namespace std; 
class Funciones{
  protected:
  Organizacion org;
  Coordinador coord;
  Donador don;
  Donador* donador;
  public:
  void agregarPago(Organizacion *org);
  void consultarHistorial();
  void agregarCoordinador();
  void agregarDonador();

  
};

void Funciones::agregarPago(Organizacion *org){

  donador->getPagos();
  
}

void Funciones::consultarHistorial(){
 org.historial();

}
void Funciones::agregarCoordinador(){
  string nombre, usuario;
  cout<<"Nombre: ";
  cin>>nombre;
  cout<<"Usuario: ";
  cin>>usuario;
  coordinadores[coordPosicion] = Coordinador(nombre,usuario);
  coordPosicion++;

}
void Funciones::agregarDonador(){
  string nombre, usuario;
  cout<<"Nombre: ";
  cin>>nombre;
  cout<<"Usuario: ";
  cin>>usuario;
  donadores[donaPosicion] = Donador(nombre,usuario);
  coordPosicion++;
}


#endif

