compile:
	gcc -c main.c
run: main.o
	gcc main.o
	./a.out
bug:
	gcc -g main.c
gdb: main.o
	gdb ./a.out
