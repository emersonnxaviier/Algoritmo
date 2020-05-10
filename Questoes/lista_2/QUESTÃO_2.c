void main()
{
	float a, b;
	printf("Digite um numero:\n");
	scanf("%f", &a);
	printf("Digite outro numero:\n");
	scanf("%f", &b);
	if(a==b)
    	printf("Numeros digitados %.f e %.f sao iguais", a, b);
	else
    	printf("Numeros digitados %.f e %.f sao diferentes", a, b);
}
