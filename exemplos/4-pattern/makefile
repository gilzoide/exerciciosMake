objetos = main.o min.o soma.o
CFLAGS = -Wall -g -O2
exe = main

all : $(objetos)
	gcc -o $(exe) $(objetos) $(CFLAGS)

%.o : %.c
	gcc -o $@ $< -c $(CFLAGS)

run :
	@./$(exe)
