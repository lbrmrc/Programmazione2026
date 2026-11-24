app: main.o aritmetica.o
	gcc -o app main.o aritmetica.o

main.o: main.c aritmetica.h
	gcc -c main.c

aritmetica.o: aritmetica.c aritmetica.h
	gcc -c aritmetica.c
	