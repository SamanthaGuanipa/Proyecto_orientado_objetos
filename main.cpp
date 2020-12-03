/*
 * Proyecto POO
 * Samantha Daniela Guanipa Ugas
 * A01703936
 * 26/11/2020
 */

//Se incluyen las clases y las librerias 

#include "Funciones.h"
#include "Organizacion.h"
#include "Usuario.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//Se crea el menú para desplegar las funciones que necesite el usuario 
void menu(){
  
  cout<<"Bienvenido a la olla solidaria"<<endl;
  cout<<"Si quiere donar dinero, calcular un proyecto o registrarse escriba 1."<<endl;
  cout<<"Si quiere ver el historial de pagos recibidos escriba 2."<<endl;
  cout<<"Si quiere consultar la lista de coordinadores escriba 3."<<endl;
  cout<<"Si quiere consultar la lista de donadores escriba 4."<<endl;
  cout<<"Si quiere salir escriba 5."<<endl;
}


void menuAgrega(){
  cout<<"¿Qué acción desea realizar?"<<endl; 
  cout<<"Si desea donar dinero, escriba 1. "<<endl; 
  cout<<"Si desea registrarse como coordinador, escriba 2. "<<endl; 
  cout<<"Si desea calcular algún proyecto, escriba 3. "<<endl;
  cout<<"Si desea registrarse como donador, escriba 4. "<<endl; 
}


//Se define el main
int main() {
  
  //Se crean los objetos de las clases del programa
  Organizacion org;
  Organizacion prueba;
  Coordinador coord;
  Donador don;
  Funciones Fun;
   
   //Se inicializa la variable opcion "opc"
   int opc=0;
   int opcion=0;
   
   
   //El menú seguirá imprimiéndose hasta que se seleccione salir 
   while (opc<5 && opc>-1){
	   
     //Se imprimirá el menú 
     menu(); 
    
     
     //Se recibe opcion
     
     cin>>opc; 
     
     
     //Se establece un "switch" para la ejecución del menú
     switch(opc){
     
     
     case 2: 
         cout<<"Ha elegido consultar el historial de pagos recibidos."<<endl; 
         Fun.consultarHistorial(org);
     break; 

     
     case 3: 
        cout<<"Eligió ver la lista de coordinadores: "<<endl;
        Fun.mostrarCoordinador();
     break; 
     
     
     case 4: 
       cout<<"Eligió ver la lista de donadores: "<<endl; 
        Fun.mostrarDonador();
     break; 
    
    
    case 1: 
    
    //Se imprime el menú derivado
     
     menuAgrega();

     
     //Se recibe la opción seleccionada por el usuario
     cin>>opcion; 

     //Se crea un switch para la ejecución del menú 

         switch(opcion){
             
             case 1:
                 don.agregarPago(&org);
                 cout<<"Se agregó su pago con éxito. "<<endl;
              break; 

             
              case 2: 
                 Fun.agregarCoordinador();
                 cout<<"Se registró con éxito. "<<endl;
              break; 

              
              case 3:
                 coord.calcularProyectos (org);
              break; 

              
              case 4: 
                 Fun.agregarDonador();
                 cout<<"Se registró con éxito. "<<endl;
              break; 

   

        }
        //Se sale del menú
   case 5: 
   cout<<"Gracias por apoyarnos, hasta luego"<<endl;
   break;
  
         
   }

   }

  
}
