#include <iostream>
#include <string> 
#include <sstream>
#include "Usuario.h"
#include "Organizacion.h"
#include "Funciones.h"
using namespace std;
int main() {
  Organizacion org;
  Coordinador coord;
  Donador don;
  Funciones Fun;
  org.getPagos();
  don.agregarPago(&org);
  Fun.agregarPago();
  Fun.consultarHistorial();
}
