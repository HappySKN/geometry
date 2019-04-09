all: bin/geometry



build/print.o: src/print.cpp
	g++ src/print.cpp -o build/print.o -c -Wall -Werror -lgraph

build/polygon_calculations.o: src/polygon_calculations.cpp
	g++ src/polygon_calculations.cpp -o build/polygon_calculations.o -c -Wall -Werror

build/triangle_calculations.o: src/triangle_calculations.cpp
	g++ src/triangle_calculations.cpp -o build/triangle_calculations.o -c -Wall -Werror

build/circle_calculations.o: src/circle_calculations.cpp
	g++ src/circle_calculations.cpp -o build/circle_calculations.o -c -Wall -Werror

build/polygon.o: src/polygon.cpp
	g++ src/polygon.cpp -o build/polygon.o -c -Wall -Werror

build/triangle.o: src/triangle.cpp
	g++ src/triangle.cpp -o build/triangle.o -c -Wall -Werror

build/circle.o: src/circle.cpp
	g++ src/circle.cpp -o build/circle.o -c -Wall -Werror

build/main.o: src/main.cpp
	g++ src/main.cpp -o build/main.o -c -Wall -Werror

bin/geometry: build/main.o build/circle.o build/triangle.o build/polygon.o build/circle_calculations.o build/triangle_calculations.o build/polygon_calculations.o build/print.o
	g++ build/main.o build/circle.o build/triangle.o build/polygon.o build/circle_calculations.o build/triangle_calculations.o build/polygon_calculations.o build/print.o -Wall -Werror -o bin/geometry -lgraph

.PHONY: clean

clean:
	rm -rf build/*.o bin/geometry