concessionaria: programa.o sistema.o concessionaria.o veiculo.o
	g++ -Wall -Iinclude -o concessionaria programa.o sistema.o concessionaria.o veiculo.o

programa.o: src/programa.cpp include/sistema.h
	g++ -c src/programa.cpp

sistema.o: src/sistema.cpp include/sistema.h
	g++ -c src/sistema.cpp

concessionaria.o: src/concessionaria.cpp include/concessionaria.h
	g++ -c src/concessionaria.cpp

veiculo.o: src/veiculo.cpp include/veiculo.h
	g++ -c src/veiculo.cpp