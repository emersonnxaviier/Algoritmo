void main()
{
	int x;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	if (x % 10==0)
    	printf("%d e divisivel por 10", x);
	else if (x % 5==0 )
    	printf("%d e divisivel por 5", x);
	else if(x % 2==0)
    	printf("%d e divisivel por 2", x);
	else
    	printf("%d nao e divisivel por 10 nem por 5 nem por 2", x);
}
