void main()
{
	int i, m, d, x, e, z, s ;
	printf("Digite sua idade:\n");
	scanf("%d", &i);
	printf("Digite o mes em que voce nasceu:\n");
	scanf("%d",&m );
	printf("Digite o dia em que voce nasceu:\n");
	scanf("%d", &d);
	x = i*365;
	z = m*30;
	e = d*1;
	s = x+e+z;
	printf("Dias vividos = %d",s );
}
