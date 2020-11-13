#include <iostream>
using namespace std;

//Primera clase
class Ecologico{
private: //atributos
  int cant_products;
  int precio;
public: //métodos
  Ecologico(int,int);
  void descuento();
  void precio_final();

};
//Inicializar los métodos
Ecologico::Ecologico(int _cantidad, int _precio){
  
  cant_products=_cantidad;
  precio=_precio;

}

void Ecologico::descuento(){
  float _descuento;
    _descuento=precio*.40;
    cout<<"El descuento es de: "<<_descuento<<endl;
    //Se le agregará un if en el que se aumentará el descuento dependiendo de la cantidad de productos que ingrese la persona. 
  

}
void Ecologico::precio_final(){
  float _final;
    _final=precio*.60; //en el futuro se mandará a llamar _descuento para hacer el descuento directamente 
    cout<<"El precio final es de: "<<_final<<endl;
    //Se le agregará un if en el que se aumentará el descuento dependiendo de la cantidad de productos que ingrese la persona. 
}
//Segunda clase
class Contaminante{
  private: //atributos
  int cant_products;
  int precio;
public: //métodos
  Contaminante(int,int);
  void incremento();
  void precio_final();

};
Contaminante::Contaminante(int cant_2, int precio_2){
  cant_products=cant_2;
  precio=precio_2;
}
  //Métodos
void Contaminante::incremento(){
 float _incremento;
 float impuesto;
 impuesto=precio*0.05;
 cout<<"El impuesto generado es "<<impuesto<<endl;
}

void Contaminante::precio_final(){
 float _final;
 _final=precio+(precio*0.05); //se hará una función que mande a llamar el impuesto generado previamente
 cout<<"El impuesto generado es "<<_final<<endl;
}

//Tercera clase
class Reuso{
  private: //atributos
  int cant_products;
  int precio;
public: //métodos
  Reuso(int);
  void descuento();
};

Reuso::Reuso(int _cantidad){
   cant_products=_cantidad;
}

void Reuso::descuento(){
float _descuento; //se agregará un if que determine el descuento que se le realizará a la persona por el número de prendas entregadas. 
_descuento=precio*0.5;
cout<<"El precio con el descuento aplicado es de: "<<_descuento<<endl;
}
int main() {
Ecologico p1=Ecologico(100,200);//crear objeto, producto 1 (p1)
Contaminante p2= Contaminante (100,200);//crear objeto, producto 2 (p2)
Reuso p3= Reuso(400);//crear objeto, producto 3 (p3)
p1.descuento();
p1.precio_final();
p2.incremento();
p2.precio_final();
p3.descuento();

}
