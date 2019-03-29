all: bin/geometry

bin/geometry: build/main.o build/functions.o
	gcc -Wall -Werror build/main.o build/functions.o -o bin/geometry 

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/functions.o: src/functions.c
	gcc -Wall -Werror -c src/functions.c -o build/functions.o


.PHONY: clean
clean:
	rm -rf build/*.o bin/geometry
