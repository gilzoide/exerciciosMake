#include "printer.h"
#include <stdio.h>

void printaVetor (int * v, int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++) {
		printf ("%d ", v[i]);
	}
	puts ("");
}
