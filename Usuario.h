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

using namespace std; 

//Declaracion de clase "Usuario" que es abstracta

class Usuario{

 protected:
 
 //Declaro los atributos 
  
  string nombre;
  string apellido;
  string user_id;


 public:  

 //Constructor por deffault
  
  Usuario():nombre(""), apellido(""), user_id(""){};

  //Constructor que tiene variables preestablecidas
  
  Usuario(string nom, string user, string p):nombre(nom), user_id(user), apellido(p){};

  //Declaro los métodos que tendrá el objeto
  
  void setNombre(string,string);
  void setUsuario(string);
  string getNombre(); 
  string getApellido(); 
  string getUsuario();
  string toString() const;

};

//Se definen los setters de la clase Usuario

void Usuario::setNombre(string _nombre, string _apellido){
  nombre=_nombre;
  apellido=_apellido;
}

//Se definen los setters de la clase Usuario

void Usuario::setUsuario(string user_nombre){
  user_id=user_nombre;
}

//Se definen los getters de la clase Usuario

string Usuario::getApellido(){
  return apellido;
}

//Se definen los getters de la clase Usuario

string Usuario::getNombre(){
  return nombre;
}

//Se definen los getters de la clase Usuario

string Usuario::getUsuario(){
  return user_id;
}

//Se crea la clase hija Donador
class Donador: public Usuario{
  protected:
   float cantidad;
   string concepto;
  public: 
  
  //Constructor por deffault
 
  Donador():nombre(""), apellido(""), user_id(""), cantidad(0), concepto(""){};
  
  //Constructor que tiene variables preestablecidas
 
  Donador(string, string, string, float, string);
  
  //se crea función que almacene los pagos (incluyendo concepto, monto y usuario)
  
  void agregar_pago(); 

};
  //Constructor que tiene variables preestablecidas
Donador::Donador(string _nombre, string _apellido, string user_nombre, float _cantidad, string _concepto):Usuario(string_nombre, string _apellido, string user_nombre){
cantidad=_cantidad;
concepto=_concepto;

}
  //se crea función que almacene los pagos (incluyendo concepto, monto y usuario)
void Donador::agregar_pago(){

}
