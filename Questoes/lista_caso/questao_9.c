void main()
{
	char pt;
	float sa, ns;
	printf("Digite seu plano de trabalho:\n");
	scanf("%c", &pt);
	printf("Digite seu salario atual:\n");
	scanf("%f", &sa);
	switch (pt)
	{
	case 'a':
		ns = sa*1.1;
		printf("Novo salario = %2.f", ns);
		break;
	case 'b':
		ns = sa*1.5;
		printf("Novo salario = %2.f", ns);
		break;
	case 'c':
		ns = sa*2.0;
		printf("Novo salario = %2.f", ns);
		break;
	default:
		printf("Plano nao cadastrado para aumento!");
		break;
	}
}
