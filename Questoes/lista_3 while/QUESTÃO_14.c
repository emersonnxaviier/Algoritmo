void main()
{
	int n, s=0, x=1;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	while(x<=n)
	{
		s = s+x;
		x = x +1;
	}
		printf("Soma = %d", s);
}
