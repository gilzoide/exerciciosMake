objetos = main.o min.o soma.o
CFLAGS = -Wall -g -O2
exe = main

all : $(objetos)
	gcc -o $(exe) $(objetos) $(CFLAGS)

# quer construir um ".o" qualquer? Basta seguir esta regra xD
# $@ é o Target "%.o" e $< o "%.c"
%.o : %.c
	gcc -o $@ $< -c $(CFLAGS)

run :
	@./$(exe)
