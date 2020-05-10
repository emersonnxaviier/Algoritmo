void main()
{
	float x, y;
	printf("Digite um numero:\n");
	scanf("%f", &x);
	printf("Digite outro numero:\n");
	scanf("%f", &y);
	if(x==y)
    	printf("Os numeros digitados %.f e %.f sao iguais", x, y);
	else
    	printf("Os numeros digitados %.f e %.f sao diferentes", x, y);
}
