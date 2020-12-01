/*
 * Proyecto POO
 * Samantha Daniela Guanipa Ugas
 * A01703936
 * 26/11/2020
 */

/*
 * Clase Organización contiene los métodos genéricos para el manejo de la Organización
 * y se compone de la clase usuario. Tiene asociación con las clases Donador y Coordinador
 * 
 *
 */

 //USAR EJEMPLO AUTO Y LLANTAS PARA LA COMPOSICIÓN

#ifndef ORGANIZACION_H_
#define ORGANIZACION_H_

#include<iostream>
#include <string> 
#include <sstream>
#include "Usuario.h"

using namespace std; 

//Declaracion de clase "Organizacion" 

class Organizacion{

 protected:
 
 //Declaro los atributos 
  
  string nombre;
  int posicion = 0;
  string concepto[100];
  float pago[100];
  Coordinador coordinadores[10];
  int coordPosicion = 0;
  Donador donadores[100]; 
  int donaPosicion=0; 
  
public:
  //Constructor por deffault
  
  Organizacion();

  //Constructor que tiene variables preestablecidas
  
  Organizacion(string nom);
 
  void set_nombre(string);
  string get_nombre();
  void getPagos();
  void getConceptos();
  void historial();
  float calcularTotal();
};

//Constructor por deffault 
Organizacion::Organizacion(){
  nombre=""; 
}
Organizacion::Organizacion(string nom){
  nombre=nom; 
}
//Se establecen los getters de la clase Organizacion

string Organizacion::get_nombre(){
  return nombre;
}
//Se establecen los setters de la clase Organizacion

void Organizacion::set_nombre(string nomb){
  nombre=nomb;
}

void Organizacion::getPagos(){
  int numeroPagos;
  cout<<"Ingrese el número de pagos a realizar"<<endl;
  cin>>numeroPagos;
  int minimo = posicion;
  for(int i=posicion; i<minimo+numeroPagos; i++)
  {
    cout<<"Ingrese el pago a realizar "<<(i+1)<<": ";
    cin>>pago[i] ;
    cout<<"Ingrese el concepto del pago a realizar "<<(i+1)<<": ";
    cin>>concepto[i] ;
    posicion++;
  }

}

void Organizacion::historial(){
 for (int i=0; i<posicion; i++)
 {
   cout<<"Pago "<<i+1<<":\n";
   cout<<"Concepto: "<<concepto[i]<<endl;
   cout<<"Cantidad: "<<pago[i]<<endl;
 }
}


float Organizacion::calcularTotal(){
  int suma=0;
  for (int i=0; i<posicion;i++)
  {
   suma+=pago[i]; 
   
  }
  return suma;
}



#endif
