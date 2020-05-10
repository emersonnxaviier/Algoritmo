void main()
{
	float n1, n2, pn1, pn2;
	printf("Digite um numero:\n");
	scanf("%f", &n1);
	printf("Digite outro numero:\n");
	scanf("%f", &n2);
	pn1=n1/(n1+n2);
	pn2=n2/(n2+n1);
	printf("percentual de n1 = %.2f\n", pn1);
	printf("percentual de n2 = %.2f", pn2);
	
	
}
