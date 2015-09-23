# cria variáveis
src = arq1.c arq2.c
exe = executavel
CFLAGS = -Wall -g -O2

# usa as variáveis: "$(nome_da_variavel)"
all : $(src)
	gcc -o $(exe) $(src) $(CFLAGS)

# target que roda o executável
# '@' faz o comando não aparecer na stdout
run :
	@./$(exe)
