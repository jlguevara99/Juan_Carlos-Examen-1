#include "FamiliaLannister.h"
#include <string>
using namespace std;

FamiliaLannister::FamiliaLannister(){

}

string FamiliaLannister::getJefe(){
	return jefe;
}

string FamiliaLannister::getAnimal(){
	return animal;
}

string FamiliaLannister::getLema(){
	return lema;
}
float FamiliaLannister::getDinero(){
	return dinero;
}
float FamiliaLannister::getFuerzaMontana(){
	return fuerzaMontana;
}

int FamiliaLannister::getSizeEjercito(){
	return sizeEjercito;
}

void FamiliaLannister::setJefe(string pJefe){
	jefe = pJefe;
}

void FamiliaLannister::setAnimal(string pAnimal){
	animal = pAnimal;
}
void FamiliaLannister::setLema(string pLema){
	lema = pLema;
}
void FamiliaLannister::setDinero(float pDinero){
	dinero = pDinero;
}
void FamiliaLannister::setfuerzaMontana(float pMonta){
	fuerzaMontana = pMonta;
}
void FamiliaLannister::setSizeEjercito(int pSize){
	sizeEjercito = pSize;
}



