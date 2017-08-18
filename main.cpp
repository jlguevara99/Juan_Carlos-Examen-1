#include <ncurses.h>
#include "Combatiente.h"
#include "Dothraki.h"
#include "Dragon.h"
#include "FamiliaLannister.h"
#include "FamiliaNoble.h"
#include "FamiliaStark.h"
#include "FamiliaTargaryen.h"
#include "GuardiaReal.h"

using namespace std;
char menu();
void mostrarMensaje(int);
void agregarFamilia(FamiliaStark*, FamiliaLannister*, FamiliaTargaryen*);

FamiliaLannister* famLan;
FamiliaStark* famSta;
FamiliaTargaryen* famTar;



int main(){
	initscr();
	//start_color();
	//init_pair(1, COLOR_BLUE, COLOR_RED);
	//wbkgd(WindowName, COLOR_PAIR(1));

	refresh();

	char opcion = 's';
	while(opcion != 'x'){
		opcion = menu();

		switch(opcion){
			case 'a':{
						 agregarFamilia(famSta, famLan, famTar);
					 }
					 break;
			case 'x':{
						 mostrarMensaje(1);
						 getch();
					 }
					 break;
			default:{
						mostrarMensaje(0);
						getch();
					}
					break;
		}
	}
	endwin();
	return 0;
}

char menu(){
	clear();

	move(10, 23);
	printw("Examen 1");
	move(11, 10);
	printw("Carlos Velásquez y Juan Luis Guevara");
	move(12, 10);
	printw("-------------------------------------");


	move(14, 17);
	printw("a. Agregar Familia Noble");
	move(15, 17);
	printw("b. Agregar Ejército");
	move(16, 17);
	printw("c. Listar Ejércitos");
	move(17, 17);
	printw("d. Modificar Ejército");
	move(18, 17);
	printw("e. Eliminar Ejército");
	move(19, 17);
	printw("f. Simular Batalla");

	move(20, 17);
	printw("x. Salir del Programa");

	move(22, 8);
	printw("Ingrese la letra de la opción que desea - ");

	char opcion;
	opcion = getch();
	return opcion;
}

void mostrarMensaje(int codigo){
	switch(codigo){
		case 0:{
				   clear();
				   move(10, 23);
				   printw("[ERROR]");
				   move(11, 10);
				   printw("Opción Inválida, intente de nuevo");
				   move(12, 10);
			   }
			   break;
		case 1:{
				   clear();
				   move(10, 20);
				   printw("[Saliendo]");
				   move(11, 10);
				   printw("'Fear cuts deeper than swords.'");
				   move(12, 10);

			   };
		default:
			   break;
	}FamiliaLannister* famLan;


}

void agregarFamilia(FamiliaStark* famSta, FamiliaLannister* famLan, FamiliaTargaryen* famTar){
	clear();

	move(10, 20);
	printw("Agregar Familia");
	move(11, 10);
	printw("Ingrese los datos requeridos");
	move(12, 10);
	printw("-------------------------------------");

	move(13, 17);
	printw("Familia a agregar: ");
	move(14, 10);
	printw("a. Familia Stark");
	move(15, 10);
	printw("b. Familia Lannister");
	move(16, 10);
	printw("c. Familia Targaryen");

	move(18, 8);
	printw("Ingrese la letra de la opción que desea - ");
	char op = getch();

	switch(op){
		case 'a':{
					 famSta = new FamiliaStark();

					 clear();

					 move(10, 20);
					 printw("Agregar Familia");
					 move(11, 10);
					 printw("Ingrese los datos requeridos");
					 move(12, 10);
					 printw("-------------------------------------");

					 move(13, 17);
					 printw("Jefe de Familia: ");
					 char jefFam[80];
					 getstr(jefFam);

					 move(14, 17);
					 printw("Cantidad de Lobos Huargos: ");
					 char lobHua[10];
					 getstr(lobHua);
					 move(15, 17);
					 printw("Animal Emblema: ");
					 char aniEmb[80];
					 getstr(aniEmb);


				 }
				 break;
		default:{
					mostrarMensaje(0);
				}
				break;
	}


}
