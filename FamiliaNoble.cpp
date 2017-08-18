#include "FamiliaNoble.h"

void FamiliaNoble::setSimboloEscudo(char nSimboloEscudo){
	simboloEscudo = nSimboloEscudo;
}

void FamiliaNoble::setLema(string nLema){
	lema = nLema;
}

char FamiliaNoble::getSimboloEscudo(){
	return simboloEscudo;
}

string FamiliaNoble::getLema(){
	return lema;
}
