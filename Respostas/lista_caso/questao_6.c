void main()
{
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Janeiro-31 dias");
		break;
	case 2:
		printf("Fevereiro-28 dias");
		break;
	case 3:
		printf("Marco-31 dias");
		break;
	case 4:
		printf("Abril-30 dias");
		break;
	case 5:
		printf("Maio-31 dias ");
		break;
	case 6:
		printf("junho-30 dias");
		break;
	case 7:
		printf("Julho-31 dias");
		break;
	case 8:
		printf("Agosto-31 dias");
		break;
	case 9:
		printf("Setembro-30 dias");
		break;
	case 10:
		printf("Outubro-31 dias");
		break;
	case 11:
		printf("Novembro-30 dias");
	case 12:
		printf("Dezembro-31 dias");
		break;
    default:
    	printf("Nao corresponde a nenhum mes!");
    }
}
