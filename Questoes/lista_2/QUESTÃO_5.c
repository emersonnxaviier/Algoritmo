void main()
{
	int a, b;
	printf("Digite um numero:\n");
	scanf("%d", &a);
	printf("Digite outro numero:\n ");
	scanf("%d", &b);
	if (a % b==0)
    	printf("Os numeros %d e %d sao divisiveis", a, b);
 	else
    	printf("Os numeros %d e %d nao sao divisiveis", a, b);
}
