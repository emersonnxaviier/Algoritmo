void main()
{
	int n1, n2, r;
	char o;
	printf("Digite um numero:\n");
	scanf("%d", &n1);
	printf("Digite outro numero:\n");
	scanf("%d", &n2);
	printf("Digite a operacao:\n");
	scanf("%c", &o);
	switch ( o )
	{
	case '+':
		r = n1+n2;
		printf("soma dos numeros = %d", r);
		break;
	case '-':
		r = n1-n2;
		printf("subtracao dos numeros = %d", r);
		break;
	case '*':
		r = n1*n2;
		printf("multiplicacao dos numeros = %d", r);
		break;
	case '/':
		r = n1/n2;
		printf("divisao dos numeros = %d", r);
		break;
	default:
		printf("nao foi digitado uma operacao!");
		break;
		
	}
	
}
