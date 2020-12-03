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


#ifndef ORGANIZACION_H_
#define ORGANIZACION_H_

#include<iostream>
#include <string> 
#include <sstream>

using namespace std; 

//Declaracion de clase "Organizacion" 

class Organizacion{

 protected:
 
 //Se declaran los atributos 
  int posicion = 0;
  string nombre;
  string user;
  string concept;
  float cantidad;
  string name[100];
  string usuario[100];
  string concepto[100];
  float pago[100];
  int coordPosicion = 0;
  int donaPosicion=0; 
 
  
public:
  
  //Constructor por deffault
  
  Organizacion();

  
  //Constructor que tiene variables preestablecidas
  
  Organizacion(string nom, string user, string conc, float cant );
 

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
  user="";
  concept="";
  cantidad=0.0;
}


Organizacion::Organizacion(string nom, string user_1, string conce, float cant){
  nombre=nom;
  user=user_1;
  concept=conce; 
  cantidad=cant;
}

//Se establecen los getters de la clase Organizacion

string Organizacion::get_nombre(){
  return nombre;
}

//Se establecen los setters de la clase Organizacion

void Organizacion::set_nombre(string nomb){
  nombre=nomb;
}

//Se crea el método que recibe los pagos a través de arreglos

void Organizacion::getPagos(){

  int numeroPagos;

  cout<<"Ingrese el número de pagos a realizar"<<endl;
  
  //Se recibe el numero de pagos a realizar 
  cin>>numeroPagos;
  
  //Se inicializan las variables
  int minimo = posicion;

  //Inicia el ciclo for 
  for(int i=posicion; i<minimo+numeroPagos; i++)
  {

    cout<<"Ingrese su nombre "<<(i+1)<<": ";
    cin>>name[i] ;
    cout<<"Ingrese su usuario "<<(i+1)<<": ";
    cin>>usuario[i];
    cout<<"Ingrese el concepto del pago a realizar "<<(i+1)<<": ";
    cin>>concepto[i] ;
    cout<<"Ingrese el pago a realizar "<<(i+1)<<": ";
    cin>>pago[i] ;
    cout<<"Su pago fue realizado con éxito."<<endl;
    posicion++;
  }

}

//Se crea el método que enseña los pagos realizados
void Organizacion::historial(){
 for (int i=0; i<posicion; i++)
 {
   cout<<"Pago "<<i+1<<":\n";
   cout<<"Nombre: "<<name[i]<<endl;
   cout<<"Usuario: "<<usuario[i]<<endl; 
   cout<<"Concepto: "<<concepto[i]<<endl;
   cout<<"Cantidad: "<<pago[i]<<endl;
 }
}

//Se crea la función que suma el total de pagos realizados
float Organizacion::calcularTotal(){
  int suma=0;
  for (int i=0; i<posicion;i++)
  {
   suma+=pago[i]; 
   
  }
  return suma;
}



#endif //ORGANIZACION_H_
