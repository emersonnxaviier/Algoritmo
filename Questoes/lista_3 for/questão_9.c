void main()
{
	int x, y, s=0;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	printf("Digite outro numero:\n");
	scanf("%d", &y);
	for(;x<=y;x++)
	{
	if(x % 2 != 0)
	s = s + 1;
    }
    printf("numeros impares existentes no intervalo = %d\n", s);
}
