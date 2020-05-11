int menor(int n1, int n2)
{
	if(n1<n2)
    	return n1;
	else
    	return n2;
}

int main()
{
	int n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	if(menor(n1, n2) && n1<n2)
    	printf("Menor numero e %d", n1);
	else
    	printf("Menor numero e %d", n2);
}n
