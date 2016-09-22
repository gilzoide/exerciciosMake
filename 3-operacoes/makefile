src = main.c
CFLAGS = -Wall -O2

# se chamado com Debug=1, adiciona "-g"
ifdef Debug
	# operador "+=" concatena
	CFLAGS += -g
endif

# substituição de sufixo: ".c" vira ""
all : $(src)
	gcc -o $(src:.c=) $(src) $(CFLAGS)
