#include <stdio.h>
#include <stdlib.h>

float CparaF( float tc)
{   
    float f;
	f = (9*tc/5)+32;
	return f;
}
float FparaC(float tf)
{  
    float c;
	c = 5*(tf-32)/9;
	return c;;
 
}
void main()
{
	float temperatura, tc, tf;
	char opcao1;
	printf("Celsius para Fahrenheit ( C )\n\n");
	printf("Fahrenheit para Celcius ( F )\n\n");
	printf("Digite a opcao:  ");
    scanf("%c", &opcao1);
   
   	if (opcao1 =='c' || opcao1 == 'C')
	{
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    printf("\n%.1f graus Celsius e igual a %.1f graus Fahrenheit", temperatura, CparaF(temperatura));
	}
    else if (opcao1 =='f' || opcao1 == 'F')
	{
	printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura);

    printf("\n%.1f graus Fahrenheit e igual a %.1f graus Celsius", temperatura, FparaC(temperatura));
    }
    else
	printf("Opcao invalida!"); 
  
}



