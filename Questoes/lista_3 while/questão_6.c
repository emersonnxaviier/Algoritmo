#include<stdio.h>
void main()
{
	int cont=14, n2=73, s=0, cont1=0;
	float m;
	while(cont<n2)
	{
	s = s+cont;
	printf("%d\n", cont);
	cont=cont+2;
	cont1=(cont-14)/2;
	m = s/cont1;
	}
	printf("numeros contados = %d\n", cont1);
	printf("soma dos numeros = %d\n", s);
	printf("media dos numeros = %.2f\n", m);
}
