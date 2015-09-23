#include <stdio.h>
#include "soma.h"
#include "min.h"

int main () {
	int resultado = soma (min (12, 50), 30);
	printf ("Resultado da operação: %d\n", resultado);
	return 0;
}
