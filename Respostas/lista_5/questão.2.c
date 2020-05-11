int bissexto(int pAno)
{
	if ((pAno%400 == 0) || (pAno%4==0) && (pAno%100 != 0) )
	return 1;
	else 
	return 0;
}

int main()
{
	int Ano;
	printf("Digite um ano: ");
	scanf("%d", &Ano);
	if(bissexto(Ano)== 1)
	    printf("O ano %d e bissexto", Ano);
	else
	     printf("O ano %d nao e bissexto", Ano);
}
