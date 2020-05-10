void main()
{
	float salario, ns;
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	if (salario<=500.00)
	{
		ns=(salario*1.5);
		printf("Novo salario e = %.2f ",ns);
	
	}
	else if (salario>=500.01 && salario<=1000.00)
	{
		ns=(salario *1.4);
		printf("Novo salario e = %.2f ", ns);
	}
	else if (salario>=100.01 && salario<=2000.00)
	{
		ns=(salario*1.3);
		printf("Novo salario e = %.2f", ns );
	}
	else if (salario>=2000.01 && salario<=2500.00)
	{
		ns=(salario*1.2);
		printf("Novo salario e = %.2f ", ns);
	}
	else if (salario>2500.00)
	{
		ns=(salario*1.1);
		printf("Novo salario e = %.2f", ns);
	}
}
