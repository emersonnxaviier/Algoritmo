#include<stdio.h>
void main()
{
	int n, maior=0;
	for(;n!=0;)
	{
		printf("Digite um numero: ");
    	scanf("%d", &n);
		if(n>maior)
		maior=n;
	}
	printf("maior numero digitado = %d", maior);
}
