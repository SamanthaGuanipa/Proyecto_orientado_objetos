#include <iostream>
using namespace std;
class Organizacion{
 private:
 string nombre;
 float antiguedad;
 string categoria;
 public: 
 Organizacion():nombre(""),antiguedad(0),categoria(""){};//constructor por deffault
 Organizacion(string nom, float antig, string cat):nombre(nom), antiguedad(antig), categoria(cat){};//constructor 
 string get_nombre();
 float get_antiguedad();
 string get_categoria();
 void set_nombre(string);
 void set_antiguedad(float);
 void set_categoria(string);
};

//getters
string Organizacion::get_nombre(){
  return nombre;
}
float Organizacion::get_antiguedad(){
  return antiguedad;
}
string Organizacion::get_categoria(){
  return categoria;
}

//setters
void Organizacion::set_nombre(string name){
  nombre=name;
}
void Organizacion::set_antiguedad(float time){
  antiguedad=time;
}
void Organizacion::set_categoria(string categ){
  categoria=categ;
}


int main() {
 
}
