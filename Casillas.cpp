#include "Casillas.h"
#include <string>

using namespace std;

int Casillas::getPosicion()
{
  return posicion;
}

void Casillas::setPosicion(int posicion)
{
  this -> posicion = posicion;
}

string Casillas::getName()
{
  return name;
}

void Casillas::setName(string name)
{
  this -> name = name;
}
