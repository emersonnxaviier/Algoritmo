void main()
{
	int x, y, s=0;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    printf("Digite outro numero:\n");
    scanf("%d", &y);
    while(x<=y)
    {
    	x=x+1;
    	if(x%2==0)
    	s=s+1;
    	
	}
	printf(" numeros pares existentes no intervalo = %d", s);
}
