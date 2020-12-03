/*
 * Proyecto POO
 * Samantha Daniela Guanipa Ugas
 * A01703936
 * 26/11/2020
 */

/*
 * Clase Funciones fue creada para mandar a llamar las funciones que dependen entre Usuario y Organizacion. Se llama funciones y recibe a las clases "Organizacion.h" y "Usuario.h"
 * 
 *
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


#include<iostream>
#include <string> 
#include <sstream>
#include "Usuario.h"
#include "Organizacion.h"

using namespace std; 


//Declaracion de la clase Funciones 
class Funciones{

  
  //Se declaran los atributos 
  protected:
  string nombrecoord,nombredona, usuariocoord, usuariodona, concepto;
  int cantidad;
  Organizacion org;
  Coordinador coordinadores[10];
  Donador donadores[100];
  Donador* donador;
  int donaPosicion=0;
  int coordPosicion=0;
 
 
 //Se declaran los métodos 
  public:
  void agregarPago(Organizacion *org);
  void consultarHistorial(Organizacion org);
  void agregarCoordinador();
  void agregarDonador();
  void mostrarCoordinador();
  void mostrarDonador();

  
};

//Se crea la función agregarPago que recibe objeto Organizacion

void Funciones::agregarPago(Organizacion *org){

  donador->getPagos();
  
}

//Se crea la función consultarHistorial que recibe objeto Organizacion

void Funciones::consultarHistorial(Organizacion org){
 org.historial();

}

//Se crea la función agregarCoordinador que recibe objeto Coordinador
void Funciones::agregarCoordinador(){
  cout<<"Nombre: ";
  cin>>nombrecoord;
  cout<<"Usuario: ";
  cin>>usuariocoord;
  coordinadores[coordPosicion] = Coordinador(nombrecoord,usuariocoord);
  coordPosicion++;

}

//Se crea la funcion agregarDonador que recibe objeto Donador
void Funciones::agregarDonador(){
  
  cout<<"Nombre: ";
  cin>>nombredona;
  cout<<"Usuario: ";
  cin>>usuariodona;
  cout<<"Cantidad: ";
  cin>>cantidad;
  cout<<"Concepto: ";
  cin>>concepto;
  donadores[donaPosicion] = Donador(nombredona,usuariodona,cantidad,concepto);
  donaPosicion++;
}

//Se crea la funcion mostrarCoordinador que enseña los arreglos creados a través de un ciclo for 

void Funciones::mostrarCoordinador(){

 for (int i=0; i<coordPosicion; i++)
 {
   cout<<"Coordinador "<<i+1<<":\n";
   cout<<"Nombre: "<<nombrecoord<<endl;
   cout<<"Usuario: "<<usuariocoord<<endl;
 }
}

//Se crea la funcion mostrarDonador que enseña los arreglos creados a través de un ciclo for 

void Funciones::mostrarDonador(){
 for (int i=0; i<=donaPosicion; i++)
 {
   cout<<"Donador"<<i+1<<":\n";
   cout<<"Nombre: "<<nombredona<<endl;
   cout<<"Usuario: "<<usuariodona<<endl;
   cout<<"Cantidad: "<<cantidad<<endl;
   cout<<"Concepto: "<<concepto<<endl;
 }
}




#endif //FUNCIONES_H_
