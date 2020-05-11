#include<stdio.h>
void main()
{
	int n, x, y, maior;
	n=0;
	maior=0;
	x=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(x<=n)
	{
		x=x+1;
		scanf("%d", &y);
		if(y>maior)
		maior=y;
	}
	printf("maior numero digitado = %d", maior);
}
