main: Main.o Combatiente.o Dothraki.o Dragon.o FamiliaLannister.o FamiliaNoble.o FamiliaStark.o FamiliaTargaryen.o GuardiaReal.o
	g++ Combatiente.o Dothraki.o Dragon.o FamiliaLannister.o FamiliaNoble.o FamiliaStark.o FamiliaTargaryen.o GuardiaReal.o -lncurses -o Out

Main.o: main.cpp
	g++ -c main.cpp

Combatiente.o: Combatiente.h Combatiente.cpp
	g++ -c Combatiente.cpp

Dothraki.o: Dothraki.h Dothraki.cpp
	g++ -c Dothraki.cpp

Dragon.o: Dragon.h Dragon.cpp
	g++ -c Dragon.cpp

FamiliaLannister.o: FamiliaLannister.h FamiliaLannister.cpp
	g++ -c FamiliaLannister.cpp

FamiliaNoble.o: FamiliaNoble.h FamiliaNoble.cpp
	g++ -c FamiliaNoble.cpp

FamiliaStark.o: FamiliaStark.h FamiliaStark.cpp
	g++ -c FamiliaStark.cpp

FamiliaTargaryen.o: FamiliaTargaryen.h FamiliaTargaryen.cpp
	g++ -c FamiliaTargaryen.cpp

GuardiaReal.o: GuardiaReal.h GuardiaReal.cpp
	g++ -c GuardiaReal.cpp

clean:
	rm -f *.o main

