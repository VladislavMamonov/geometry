all: bin/geometry

bin/geometry: build/src/main.o build/src/functions.o
	gcc -Wall -Werror build/src/main.o build/src/functions.o -o bin/geometry -lm 

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/functions.o: src/functions.c
	gcc -Wall -Werror -c src/functions.c -o build/src/functions.o



test: bin/geometry_test

bin/geometry_test: build/test/main.o build/test/functions.o
	gcc -Wall -Werror build/test/main.o build/test/functions.o -o bin/geometry_test -lm

build/test/main.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty -I src test/main.c -o build/test/main.o

build/test/functions.o: src/functions.c src/functions.h
	gcc -Wall -Werror -c -I thirdparty -I src src/functions.c -o build/test/functions.o



.PHONY: clean
clean:
	rm -rf build/src/*.o bin/geometry
	rm -rf build/test/*.o bin/test
