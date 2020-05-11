#include "funcoes.h"

void main()
{
	float n1, n2, n3, maior=0;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	printf("Digite mais um numero: ");
	scanf("%f", &n3);

	maior = maiorvalor(n1, n2, n3 );
	printf("Maior numero e %.1f\n", maior);
}
