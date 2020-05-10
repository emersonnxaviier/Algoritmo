void main()
{
	int a, b, c, d, e;
	float x;
	printf("Digite um valor para a variavel A:\n");
   	scanf("%d", &a);
	printf("Digite um valor para a variavel B:\n");
	scanf("%d", &b);
	printf("Digite um valor para a variavel C:\n");
	scanf("%d", &c);
	printf("Digite um valor para a variavel D:\n");
	scanf("%d", &d);
	printf("Digite um valor para a variavel E:\n");
	scanf("%d", &e);
	x=((3*(a*a*a)+ c*(b*b))/(1+4*d))-e/2;
	printf("Resultado = %.1f", x );
}
