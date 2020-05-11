void main()
{
	int x, y;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	printf("Digite outro numero:\n");
	scanf("%d", &y);
	if(x<y)
    	printf("Numeros digitados em ordem crescente = %d , %d", x, y);
	else
    	printf("Numeros digitados em ordem crescente = %d , %d", y, x);
}
