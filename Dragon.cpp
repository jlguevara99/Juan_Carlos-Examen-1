#include "Dragon.h"

void Dragon::setColor(string nColor){
	color = nColor;
}

void Dragon::setTamano(float nTamano){
	tamano = nTamano;
}

void Dragon::setDistanciaLlama(float nDistanciaLlama){
	distanciaLlama = nDistanciaLlama;
}

string Dragon::getColor(){
	return color;
}

float Dragon::getTamano(){
	return tamano;
}

float Dragon::getDistanciaLlama(){
	return distanciaLlama;
}
