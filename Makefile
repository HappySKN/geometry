all: main

main: main.o
	g++ main.o -Wall -o geometry -lgraph

main.o: main.cpp
	g++ main.cpp -Wall -c -lgraph