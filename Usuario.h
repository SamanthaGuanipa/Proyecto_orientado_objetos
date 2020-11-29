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

using namespace std; 

//Declaracion de clase "Usuario" que es abstracta

class Usuario{

 protected:
 
 //Declaro los atributos 
  
  string nombre;
  string user_id;


 public:  

 //Constructor por deffault
  
  Usuario():nombre(""), user_id(""){};

  //Constructor que tiene variables preestablecidas
  
  Usuario(string nom, string user):nombre(nom), user_id(user){};
 
 //setters
  
  void setNombre(string);
  void setUsuario(string);

  //getters
  
  string getNombre();
  string getUsuario();

};

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
  Coordinador():nombre(""), user_id(""){};//Constructor por deffault
  Coordinador(string, string); //Constructor con variables preestablecidas
  void consultarPagos(Organizacion); 
  void calculaProyectos(Organizacion); 

};
Coordinador:Coordinador(string nom, string user):Usuario(string nom, string user){

}
void consultarPagos(Organizacion){


}

void calculaProyectos(Organizacion){

}
 
 //Se crea la clase Donador que es hija de Usuario

class Donador: public Usuario{
  protected:
   float cantidad;
   string concepto;

  //Se establecen los atributos de la clase Coordinador
  public: 
   Donador():nombre(""), user_id(""),cantidad(0),concepto(""){};//Constructor por deffault
   Coordinador(string, string, float, string); //Constructor con variables preestablecidas
   void agregarPago(Organizacion);

};

//Se crea el Constructor
Donador:Donador(string nom, string user,float cant, string concept):Usuario(string nom, string user){
cantidad=cant;
concepto=concept;
}

//Se crea la función que registra los pagos
void agregarPago(Organizacion){


}


 
