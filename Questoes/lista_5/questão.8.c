#include "funcoes.h"
void main()
{
	float n1, n2, n3, menor=0;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	printf("Digite mais um numero: ");
	scanf("%f", &n3);

	menor = menorvalor(n1, n2, n3 );
	printf("Menor numero e %.1f\n", menor);
}
