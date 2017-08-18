#include "Combatiente.h"

class Dothraki : public Combatiente{
	private:
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
	public:
		void setJefeBarbaro(string);
		void setNombreCaballo(string);
		void setColorCaballo(string);

		string getJefeBarbaro();
		string getNombreCaballo();
		string getColorCaballo();
};
