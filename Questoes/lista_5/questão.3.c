#include <stdio.h>
#include <math.h>
int potencia(int n1, int n2){
	
  return pow(n1,n2);  //pow(base , expoente)
}

int main() {
int n1, n2, p=0;
printf("  Digite um numero:  ");
scanf("%d", &n1);
printf("Digite outro numero: ");
scanf("%d", &n2);

p = potencia(n1, n2);
    printf("\nValor de %d elevado a %d = %d", n1, n2, p);
}
