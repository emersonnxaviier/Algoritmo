#include<stdio.h>
void main()
{
int codigo, quantidade, cancelar, r;
float v;
printf("        CARDAPIO DO DIA\n\n ");
 printf("Se deseja  CACHORRO QUENTE  digite : 100\n\n ");
 printf("Se deseja  BAURU  digite : 101\n\n ");
 printf("Se deseja   PASTEL  digite : 102\n\n ");	
 printf("Se deseja  REFRIGERANTE  digite : 103\n\n ");	
 printf("Se deseja  SUCO  digite : 104\n\n ");
 printf("Se deseja  MISTO QUENTE  digite : 105\n\n ");
 scanf("%d", &codigo);
 printf("Digite a quantidade:\n");
 scanf("%d", &quantidade);
 printf(" Deseja cancelar  o pedido digite 0:\n\n ");
 printf("Se deseja continuar digite 1:\n\n ");
 scanf("%d", &cancelar);
 switch (cancelar)
 {
 	case 0:
 	    printf("Pedido cancelado!\n\n"); 
 	    return;
 	case 1:
 		printf("");
 		break;
 }
 
 switch (codigo)
 {
 case 100:
	printf("item pedido - CACHORRO QUENTE\n\n");
	v = quantidade*3.00;
	printf("Total a pagar = %2.f reais", v);
    break;
case 101:
	printf("item pedido - BAURU\n\n");
	v = quantidade*3.50;
	printf("Total a pagar = %2.f reais", v);
	break;
case 102:
	printf("item pedido - PASTEL\n\n");
	v = quantidade*4.00;
	printf("Total a pagar = %2.f reais", v);
	break;
case 103:
	printf("item pedido - REFRIGERANTE\n\n");
	v = quantidade*4.50;
	printf("Total a pagar = %2.f reais", v);
	break;
case 104:
	printf("item pedido - SUCO\n\n");
	v = quantidade*5.00;
	printf("Total a pagar = %2.f reais ", v);
	break;
case 105:
	printf("item pedido - MISTO QUENTE\n\n");
	v = quantidade*5.50;
	printf("Total a pagar = %2.f reais ", v);
	break;
default:
	printf("Codigo nao cadastrado!!");
	break;
}
}
