#include<stdio.h>
void main()
{
	int n, f;
	f=1;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	for (; n>0 ; n--)
		f=f*n;
	{
		printf("fatorial = %d", f );
	}
}
