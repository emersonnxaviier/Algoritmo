#include <stdio.h>
void main()
{
	float n, x, h;
	x=1;
	h=0;
	n=0;
	printf("Digite um numero:\n");
	scanf("%f", &n);
	for (x=1;x<=n;x++) 
	{
	    h=h+(1/x);
    }
   printf("Valor de H = %.2f",h);
}
