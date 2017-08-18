#include "Combatiente.h"

class Dragon{
	private:
		string color;
		float tamano;
		float distanciaLlama;
	public:
		void setColor(string);
		void setTamano(float);
		void setDistanciaLlama(float);

		string getColor();
		float getTamano();
		float getDistanciaLlama();
};
