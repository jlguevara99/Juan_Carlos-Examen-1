#include "FamiliaStark.h"
#include <string>
using namespace std;

FamiliaStark::FamiliaStark(){

}

FamiliaNoble FamiliaStark::guerrero(){

}

string FamiliaStark::getJefe(){
	return jefe;
}

void FamiliaStark::setJefe(string pJefe){
	jefe = pJefe;
}

int FamiliaStark::getLobo(){
	return lobosHuargos;
}
void FamiliaStark::setLobo(int pLobo){
	lobosHuargos = pLobo;
}
string FamiliaStark::getAnimal(){
	return animal;
}
void FamiliaStark::setAnimal(string pAnimal){
	animal = pAnimal;
}
string FamiliaStark:: getLema(){
	return lema;
}
void FamiliaStark::setLema(string pLema){
	lema = pLema;
}
int FamiliaStark::getSizeEjercito(){
	return sizeEjercito;
}
void FamiliaStark::setSizeEjercito(int pSize){
	sizeEjercito = pSize;
}
