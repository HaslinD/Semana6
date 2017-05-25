#include "Integer.h"

Double::Double(double doubles){
	this -> doubles = doubles;
}

Double::Double(){
	doubles = 0;
}

double Double::getValue(){
	return doubles;
}

void Double::setValue(double valor){
	doubles = valor;
}
