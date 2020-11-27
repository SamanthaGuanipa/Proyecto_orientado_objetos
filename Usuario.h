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

using namespace std; 

//Declaracion de clase "Usuario" que es abstracta
class Usuario{

 private:
 //Declaro los atributos 
  string nombre;
  string apellido;



 public:  
 //Declaro los métodos que tendrá el objeto
  Usuario():nombre(""),user_id(""),password("");//constructor por deffault
  Usuario(string nom, string user, string p):especie(esp),edad(ed),tam(t){};
  void setNombre(string, string);
  void setUsuario(string);
  void setPassword(string);
  string getNombre(); 
  string getApellido(); 
  string getUsuario();


};