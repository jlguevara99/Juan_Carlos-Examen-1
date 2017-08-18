#ifndef FAMILIATARGARYEN_H
#define FAMILIATARGARYEN_H
#include <string>
using namespace std;


class FamiliaTargaryen{
	private: 
		string reina;
		string animal;
		string lema;
		Dothraki* ejercitoDothraki;
		Dragon* ejercitoDragon;
		int barcos;
		int sizeEjercito;
	public:
		string getReina();
		string getAnimal();
		string getLema();
		int getBarcos();
		int getSizeEjercito();

		void setReina(string);
		void setAnimal(string);
		void setLema(string);
		void setBarcos(int);
		void setSizeEjercito(int);





};




#endif
