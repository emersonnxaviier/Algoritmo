void main()
{
	int a, b, c, d, e, y;
	printf("Digite um valor para a variavel A\n");
	scanf("%d",&a);
	printf("Digite um valor para a variavel B\n");
	scanf("%d",&b);
	printf("Digite um valor para a variavel C\n");
	scanf("%d",&c);
	printf("Digite um valor para a variavel D\n");
	scanf("%d",&d);
	printf("Digite um valor para a variavel E\n");
	scanf("%d",&e);
	y=(a-b*c)*(3*a-(d % e));
    	printf("Resultado=%d", y);
}
