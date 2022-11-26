concessionaria: programa.o sistema.o
	g++ -Wall -Iinclude -o concessionaria programa.o sistema.o

programa.o: src/programa.cpp include/sistema.h
	g++ -c src/programa.cpp

sistema.o: src/sistema.cpp include/sistema.h
	g++ -c src/sistema.cpp