#pragma once
#include <string>

using namespace std;

class Casillas{
	protected:
		int posicion;
		string name;

	public:
		//nombre
		string getName();
		void setName(string);
		//posicion relativa
		int getPosicion();
		void setPosicion(int);

		//determinar si se puede comprar la casilla
		//determinar el tipo de casilla
		/*Propiedad, Ferrocarril, Salida, Carcel, Impuestos, Arca, Casualidad, libre*/
		virtual string getTipo() = 0;
		//dueño
		//precio
};
