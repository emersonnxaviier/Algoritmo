float calcularpreco(float preco, float percentual)
 {
	return (preco+(preco*(percentual/100) ) );
}
void main()
{
	float preco, percentual, novopreco=0;
	printf("Digite o preco: ");
	scanf("%f", &preco);
	printf("Digite o percentual: ");
	scanf("%f", &percentual);
	novopreco = calcularpreco(preco, percentual);
	printf("Novo preco = %.2f\n\n", novopreco);
	
	printf("Digite o preco: ");
	scanf("%f", &preco);
	printf("Digite o percentual: ");
	scanf("%f", &percentual);
	novopreco = calcularpreco(preco, percentual);
	printf("Novo preco = %.2f\n\n", novopreco);
	
	printf("Digite o preco: ");
	scanf("%f", &preco);
	printf("Digite o percentual: ");
	scanf("%f", &percentual);
	novopreco = calcularpreco(preco, percentual);
	printf("Novo preco = %.2f\n\n", novopreco);
	
}
