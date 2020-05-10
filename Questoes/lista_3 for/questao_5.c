void main()
{
	int n;
	printf("Numeros multiplos de 9 maiores que 40 e menores que 150:\n");
	for(n=40 ; n<=150 ; n++)
	{
	if( n%9==0 )	
    	printf("%d\n", n);
	}
	return 0;
}
