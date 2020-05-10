#include<stdio.h>
float notas(float n1, float n2, float n3, char tipo) 
{
	float resposta;
	if(tipo == 'A' || tipo == 'a') {
		resposta = (n1+n2+n3)/3; 
    }
	else if(tipo =='P' || tipo == 'p') {
		resposta = ((n1*5 )+(n2*3)+(n3*2))/10;
    }
	 
	return resposta;
}  

void main() {
float n1, n2, n3, media=0;
char tipo;
printf("Digite a opcao  A ou P : ");
scanf("%c", &tipo);
printf("Digite a 1 nota: \n");
scanf("%f", &n1);
printf("Digite a 2 nota: \n");
scanf("%f", &n2);
printf("Digite a 3 nota: \n");
scanf("%f", &n3);

media = notas(n1, n2, n3, tipo);
    printf("Media e = %.1f",  media);
}
