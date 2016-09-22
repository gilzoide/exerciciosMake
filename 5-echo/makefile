objetos = main.o min.o soma.o
CFLAGS = -Wall -g -O2
exe = main

# Não gosto/quero que as pessoas vejam os comando horrendo pra
# construir meu rolê. Echo neles!
all : $(objetos)
	@gcc -o $(exe) $(objetos) $(CFLAGS)
	@echo -e '\e[32;1mCompilando executável "./$(exe)"\e[0m'

# Exemplo anterior,
%.o : %.c
	@gcc -o $@ $< -c $(CFLAGS)
	@echo -e '\e[33;1mCompilando objeto "$*"\e[0m'

run :
	@./$(exe)
