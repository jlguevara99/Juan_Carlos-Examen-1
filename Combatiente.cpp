#include "Combatiente.h"

void Combatiente::setNombre(string nNombre){
	nombre = nNombre;
}

void Combatiente::setAtaque(float nAtaque){
	ataque = nAtaque;
}

void Combatiente::setDefensa(float nDefensa){
	defensa = nDefensa;
}

string Combatiente::getNombre(){
	return nombre;
}

float Combatiente::getAtaque(){
	return ataque;
}

float Combatiente::getDefensa(){
	return defensa;
}
