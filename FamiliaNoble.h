#include "Combatiente.h"
#pragma once

class FamiliaNoble : public Combatiente{
	private:
		char simboloEscudo;
		string lema;
	public:
		void setSimboloEscudo(char);
		void setLema(string);

		char getSimboloEscudo();
		string getLema();
};
