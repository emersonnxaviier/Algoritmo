void main()
{
	float x;
	printf("Digite um numero:\n");
	scanf("%f", &x);
	if(x==5)
    	printf("%.f e = a 5", x);
	else if (x==200)
    	printf("%.f e = a 200", x);
	else if (x==400)
    	printf("%.f e = a 400", x);
	else if (x>500 && x<=1000)
    	printf("%.f esta entre 500 e 1000", x);
	else
    	printf("Fora dos escopos");
}
