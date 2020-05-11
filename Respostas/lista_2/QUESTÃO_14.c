void main()
{
	char cB[30];
	printf("Escreva o nome da capital do Brasil\n");
    scanf("%s", &cB);
	if(strcmp(cB,"brasilia")==0)
        printf("Parabens!!");
    else if (strcmp(cB,"BRASILIA")==0)
        printf("Parabens!!");
	else
    	printf("Errou!!");
}
