app: figura.o main.o
	gcc -g -o app figura.o main.o

figura.o: figura.c figura.h
	gcc -c -g figura.c

main.o: main.c figura.h
	gcc -c -g main.c
