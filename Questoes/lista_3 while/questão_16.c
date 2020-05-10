#include <stdio.h>
void main()
{
	float n, x, h;
	x=1;
	h=0;
	n=0;
	printf("Digite um numero:\n");
	scanf("%f", &n);
	while(x<=n) 
	{
	    h=h+(1/x);
	    x=x+1;
    }
   printf("Valor de H = %.2f",h);
}
