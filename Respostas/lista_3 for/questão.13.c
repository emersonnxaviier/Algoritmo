#include<stdio.h>
void main()
{
	int n, x, y, maior;
	n=0;
	maior=0;
	x=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	for(x=1;x<=n;x++)
	{
		
		scanf("%d", &y);
		if(y>maior)
		maior=y;
	}
	printf("maior numero digitado = %d", maior);
}
