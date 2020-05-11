void main()
{
	int n1, n2;
	printf("Digite um numero:\n");
	scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    while (n1<=n2)
    {
    if (n1 % 2 != 0)
	printf( "%d\n", n1);
    n1 = n1+1;
	}
}
