all: main

main: main.o circle.o print.o
	g++ build/main.o build/circle.o build/print.o -Wall -o bin/geometry -lgraph

main.o: src/main.cpp
	g++ src/main.cpp -o build/main.o -c -Wall

circle.o: src/circle.cpp
	g++ src/circle.cpp -o build/circle.o -c -Wall

print.o: src/print.cpp
	g++ src/print.cpp -o build/print.o -c -Wall -lgraph

clean:
	rm -rf build/*.o bin/geometry