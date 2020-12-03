/*
 * Proyecto POO
 * Samantha Daniela Guanipa Ugas
 * A01703936
 * 26/11/2020
 */

/*
 * Clase Usuario contiene los métodos genéricos para el manejo de los usuarios
 * y tiene 2 clases hijas que especifican el tipo de usuario:
 * Donador y Coordinador
 *
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include<iostream>
#include <string> 
#include <sstream>

#include"Organizacion.h"

using namespace std; 

//Declaracion de clase "Usuario" que es abstracta

class Usuario{

 protected:
 
 //Declaro los atributos 
  
  string nombre;
  string user_id;


 public:  

 //Constructor por deffault
  
  Usuario();

  //Constructor que tiene valores preestablecidos
  
  Usuario(string nom, string user);
 
 //setters
  
  void setNombre(string);
  void setUsuario(string);

  //getters
  
  string getNombre();
  string getUsuario();

  

};

//Constructor por deffault

Usuario::Usuario(){
  nombre="";
  user_id="";
}

//Constuctor valores determinados
Usuario::Usuario(string nom, string user){
  nom=nombre;
  user=user_id;
}

//Se establecen los getters de la clase Usuario

string Usuario::getNombre(){
  return nombre;
}

//Se establecen los getters de la clase Usuario

string Usuario::getUsuario(){
  return user_id;
}

//Se establecen los setters de la clase Usuario

void Usuario::setNombre(string name){
  nombre=name;

}

//Se establecen los setters de la clase Usuario

void Usuario::setUsuario(string user){
  user=user_id;

}

//Se crea la clase Coordinador que es hija de Usuario

class Coordinador: public Usuario{

  //Se establecen los atributos de la clase Coordinador

 public: 

//Constructor por deffault
  Coordinador();

//Constructor con variables preestablecidas
  Coordinador(string nom, string user); 
  void consultarHistorial(Organizacion org);
  void calcularProyectos(Organizacion org);
 

};

//Constructor por deffault
Coordinador::Coordinador(){
  nombre="";
  user_id="";
}

//Constructor con valores preestablecidos
Coordinador::Coordinador(string nom, string user){
  nom=nombre;
  user=user_id;
}

//Se crea la funcion CalcularProyectos que toma la suma realizada en organizacion y la aplica acá para el cálculo

void Coordinador::calcularProyectos(Organizacion org){
  cout<<"Ingrese el monto por proyecto: ";
  float monto;
  cin>>monto;
  float total=org.calcularTotal();
  int proyectos=total/monto;
  cout<<"Puedes hacer: "<<proyectos<<" proyectos.";

}

//Se crea la función consultarHistorial que recibe un objeto Organizacion
void Coordinador::consultarHistorial(Organizacion org){
 org.historial();

}
 
 //Se crea la clase Donador que es hija de Usuario

class Donador: public Usuario{

//Se establecen los atributos
  protected:
   float cantidad;
   string concepto;


  //Se establecen los atributos de la clase Coordinador
  public: 
   Donador();
   Donador(string nom, string user, float cant, string concept); //Constructor con variables preestablecidas
   void agregarPago(Organizacion *org);
   int getPagos();

};

//Constructor por deffault
Donador::Donador(){
  nombre="";
  user_id="";
  cantidad=0.0;
  concepto="";
}

//Se crea el Constructor
Donador::Donador(string nom, string user,float cant, string concept){
  nom=nombre;
  user=user_id;
  cant=cantidad;
  concept=concepto;
}

int Donador::getPagos(){
  return cantidad;
}

void Donador::agregarPago(Organizacion *org){

  org->getPagos();
  
}


#endif //USUARIO_H_
