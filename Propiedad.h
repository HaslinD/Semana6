#include "Casillas.h"
#include <string>

using namespace std;

#pragma once

class Propiedad : public Casillas {
  private:
    bool libre; //indica si la casila no tiene dueño
    double precio;
    int casas, hoteles;
    double rentaNormal;
    double rentaUnaCasa;
    double rentaDosCasas;
    double rentaTresCasas;
    double rentaCuatroCasas;
    double rentaHotel;

  public:
    //retorna el tipo de casilla: Propiedad
    virtual string getTipo();
    /*calcular la renta en base a si el jugador tiene todas la propiedades
    del mismo color y la cantidad de casas y hoteles*/
    double calcularRenta(bool);
    //marca la propiedad como que tiene dueño
    void vender();
};
