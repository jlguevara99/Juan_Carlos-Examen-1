#ifndef FAMILIASTARK_H
#define FAMILIASTARK_H
#include<string>
using namespace std;


class FamiliaStark{
	private:
		string jefe;
		int lobosHuargos;
		int sizeEjercito;
		string animal;
		string lema;
		FamiliaNoble* ejercito;
		
	public:
		FamiliaNoble guerrero();
		FamiliaStark();
		string getJefe();
		void setJefe(string);
		int getLobo();
		void setLobo(int);
		string getAnimal();
		void setAnimal(string);
		string getLema();
		void setLema(string);
		int getSizeEjercito();
		void setSizeEjercito(int);

};






#endif
