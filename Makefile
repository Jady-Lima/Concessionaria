concessionaria: build/programa.o build/sistema.o build/executor.o build/concessionaria.o build/veiculo.o build/automoveis.o build/caminhao.o build/moto.o
	g++ -Wall -Iinclude -o ./bin/concessionaria build/programa.o build/sistema.o build/executor.o build/concessionaria.o build/veiculo.o build/automoveis.o build/caminhao.o build/moto.o

build/programa.o: src/programa.cpp include/sistema.h include/executor.h 
	g++ -c src/programa.cpp -o build/programa.o

build/executor.o: src/executor.cpp include/executor.h
	g++ -c src/executor.cpp -o build/executor.o

build/sistema.o: src/sistema.cpp include/sistema.h
	g++ -c src/sistema.cpp -o build/sistema.o

build/concessionaria.o: src/concessionaria.cpp include/concessionaria.h
	g++ -c src/concessionaria.cpp -o build/concessionaria.o

build/veiculo.o: src/veiculo.cpp include/veiculos.h
	g++ -c src/veiculo.cpp -o build/veiculo.o

build/automoveis.o: src/automoveis.cpp include/automoveis.h
	g++ -c src/automoveis.cpp -o build/automoveis.o

build/caminhao.o: src/caminhao.cpp include/caminhao.h
	g++ -c src/caminhao.cpp -o build/caminhao.o

build/moto.o: src/moto.cpp include/moto.h
	g++ -c src/moto.cpp -o build/moto.o
	
