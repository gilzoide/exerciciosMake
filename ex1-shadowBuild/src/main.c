#include "aux.h"
#include "printer.h"
#include <stdio.h>

int main (int argc, char ** argv) {
	int tamanho, i;
	scanf ("%d", &tamanho);

	int vetor[tamanho];
	for (i = 0; i < tamanho; i++) {
		scanf ("%d", vetor + i);
	}

	printaVetor (vetor, tamanho);
	printaVetorAoContrario (vetor, tamanho);
	printf ("Maior número no vetor: %d\n", achaMaior (vetor, tamanho));

	return 0;
}
