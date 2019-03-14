all: main.o functions.o
	gcc main.c functions -o main 
main.o: main.c
	gcc -c main.c -o main
functions.o: functions.c
	gcc -c functions.c -o functions



clean:
	rm -f ./*.o
	rm -f ./main