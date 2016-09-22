#include "printer.h"
#include <stdio.h>

void printaVetorAoContrario (int * v, int tamanho) {
	int i;
	for (i = tamanho - 1; i >= 0; i--) {
		printf ("%d ", v[i]);
	}
	puts ("");
}
