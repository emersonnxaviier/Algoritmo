void main()
{
	int y, r, n;
	printf("Digite um numero:\n");
	scanf("%d",&n);
	y=0;
	for(;n*y<=100;y++)
	{
	r = n*y;
	printf("%d x %d = %d\n",n , y, r);
	
    }
}
