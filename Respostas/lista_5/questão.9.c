float pn(float n)
{
	//retornará 1 caso positivo
	
	//retornará 0 caso negativo
	
	if (n>=0)
	return 1;
	else
	return 0;
}

void main() 
{
float n, valor=0;
printf("Se retorno = 0 numero digitado e negativo\n\n");
printf("Se retorno = 1 numero digitado e positivo\n");
printf("\nDigite um numero: ");
scanf("%f", &n);
valor = pn(n);
printf(" Retorno = %.f", valor);

}
