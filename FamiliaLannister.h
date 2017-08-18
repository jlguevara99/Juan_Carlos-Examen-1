#ifndef FAMILIALANNISTER_H
#define FAMILIALANNISTER_H
#include<string>
#include "GuardiaReal.h"
using namespace std;

class FamiliaLannister{
	private:
		string jefe;
		string animal;
		string lema;
		GuardiaReal* ejercito;
		float dinero;
		float fuerzaMontana;
		int sizeEjercito;
		
	public:
		FamiliaLanister();
		string getJefe();
		string getAnimal();
		string getLema();
		float getDinero();
		float getFuerzaMontana();
		int getSizeEjercito();

		void setJefe(string);
		void setAnimal(string);
		void setLema(string);
		void setDinero(float);
		void setfuerzaMontana(float);
		void setSizeEjercito(int);
};





#endif
