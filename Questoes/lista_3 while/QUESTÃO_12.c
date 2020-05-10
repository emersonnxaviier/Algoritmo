void main()
{
	int y, r, n;
	printf("Digite um numero:\n");
	scanf("%d",&n);
	y=0;
	while (n*y<=100)
	{
	r = n*y;
	printf("%d x %d = %d\n",n , y, r);
	y= y+1;
	
    }
}
