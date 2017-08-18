#include "FamiliaTargeryen.h"
#include <string>
using namespace std;

string FamiliaTargaryen::getReina(){
	return reina;
}

string FamiliaTargaryen::getAnimal(){
	return animal;
}

string FamiliaTargaryen::getLema(){
	return lema;
}

int FamiliaTargaryen::getBarcos(){
	return barcos;
}

int FamiliaTargaryen::getSizeEjercito(){
	return sizeEjercito;
}

void FamiliaTargaryen::setReina(string pReina){
	reina = pReina;
}

void FamiliaTargaryen::setAnimal(string pAnimal){
	animal = pAnimal;
}

void FamiliaTargaryen::setLema(string pLema){
	lema = pLema;
}

void FamiliaTargaryen::setBarcos(int pBarcos){
	barcos = pBarcos;
}

void FamiliaTargaryen::setSizeEjercito(int pSize){
	sizeEjercito = pSize;
}
