#include <stdio.h>
void main()
{
int n, f;
f=1;
printf("Digite um numero:\n");
scanf("%d", &n);
while(n>0)
{
	f=f*n;
	n=n-1;
  }
  printf("Fatorial = %d" , f);
}
