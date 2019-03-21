all: main

main: main.o circle.o circle_calculations.o print.o
	g++ build/main.o build/circle.o build/circle_calculations.o build/print.o -Wall -Werror -o bin/geometry -lgraph

main.o: src/main.cpp
	g++ src/main.cpp -o build/main.o -c -Wall -Werror

circle.o: src/circle.cpp
	g++ src/circle.cpp -o build/circle.o -c -Wall -Werror

circle_calculations.o: src/circle_calculations.cpp
	g++ src/circle_calculations.cpp -o build/circle_calculations.o -c -Wall -Werror

print.o: src/print.cpp
	g++ src/print.cpp -o build/print.o -c -Wall -Werror -lgraph

clean:
	rm -rf build/*.o bin/geometry