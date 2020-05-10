void main()
{
	int dias, mes, ano, dia;
	printf("Digite quantidade de dias vividos:\n");
	scanf("%d", &dias);
	ano=dias/365;
	mes=(dias%365)/30;
	dia=(dias%365)%30;
	printf("Ano\n%d\n", ano);
	printf("\n");
	printf("Mes\n%d\n", mes);
	printf("\n");
	printf("Dia\n%d\n", dia);
	printf("\n");
}
