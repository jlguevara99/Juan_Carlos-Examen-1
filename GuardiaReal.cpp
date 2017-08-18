#include "GuardiaReal.h"

void GuardiaReal::setNombre(string nNombre){
	nombre = nNombre;
}

void GuardiaReal::setEdad(int nEdad){
	edad = nEdad;
}

void GuardiaReal::setTipoSoldado(string nTipoSoldado){
	tipoSoldado = nTipoSoldado;
}

string GuardiaReal::getNombre(){
	return nombre;
}

int GuardiaReal::getEdad(){
	return edad;
}

string GuardiaReal::getTipoSoldado(){
	return tipoSoldado;
}
