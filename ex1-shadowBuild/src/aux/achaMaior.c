#include "aux.h"
#include <limits.h>

int achaMaior (int * v, int tamanho) {
	int i, maior = INT_MIN;
	for (i = 0; i < tamanho; i++) {
		maior = max (v[i], maior);
	}
	return maior;
}
