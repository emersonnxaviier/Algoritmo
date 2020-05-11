void main()
{
	int segundos, horas, minutos, segds;
	printf("Digite a duracao em segundos:\n");
	scanf("%d", &segundos);
	horas= minutos / 60;
	minutos=(segundos % 60)/60;
	segds=(segundos % 60) % 60;
	printf("Horas=%d\n", horas);
	printf("Minutos=%d\n", minutos);
	printf("Segundos=%d\n", segds);
}
