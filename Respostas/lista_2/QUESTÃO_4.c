void main()
{
	int n, dig;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	dig=n/10;
   	if(dig % 2==0)
	   printf("Digito da dezena de %d e par", n);
	   else
	       printf("Digito da dezena de %d e impar", n);
	       
}
