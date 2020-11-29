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
 
 //Declaro los atributos 
  
  string nombre;
  int posicionCoordinadores;
  int posicionDonadores;

public:
 coordinadores[Coordinador];
 donadores[Doonador];

};
