#include "Combatiente.h"

class GuardiaReal{
	private:
		string nombre;
		int edad;
		string tipoSoldado;
	public:
		void setNombre(string);
		void setEdad(int);
		void setTipoSoldado(string);

		string getNombre();
		int getEdad();
		string getTipoSoldado();
};
