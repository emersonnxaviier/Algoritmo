int parouimpar(int n)
{
	// retornará 0 caso for par
	// retornará 1 caso for impar
	if(n%2==0)
	return 0;
	else 
	return 1;
}
void main()
{
	int n, r=0;
	printf("Se retorno = 0 numero digitado e par\n\n");
	printf("Se retorno = 1 numero digitado e impar\n\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	r = parouimpar(n);
	printf("\nRetorno  =  %d", r);
}
