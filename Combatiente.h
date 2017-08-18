#include <string>
using namespace std;

class Combatiente(){
	private:
		string nombre;
		float ataque;
		float defensa;
	public:
		void setNombre(string);
		void setAtaque(float);
		void setDefensa(float);

		string getNombre();
		float getAtaque();
		float getDefensa();		
};
