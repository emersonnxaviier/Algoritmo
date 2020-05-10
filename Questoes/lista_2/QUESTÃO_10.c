void main()
{
	int x;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	if(x % 3==0 & x % 5==0)
    	printf("Numero digitado %d e divisivel por 3 e por 5", x);
	else
    	printf("Numero digitado %d nao e divisivel por 3 e por 5", x);
}

