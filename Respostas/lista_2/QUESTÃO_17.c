void main()
{

int idade;
char nome[10];
printf("Digite seu nome:\n");
scanf("%s", &nome);
printf("Digite sua idade:\n");
scanf("%d", &idade);

if (idade<=10)
    printf("%s voce ira pagar 30.00 reais", nome);
else if (idade>10 & idade<=29)
    printf("%s  voce ira  pagar 60.00 reais", nome);
else if (idade>29 & idade<=45)
    printf("%s  voce ira  pagar 120.00 reais", nome);
else if (idade>45 & idade<=59)
    printf("%s  voce ira  pagar 150.00 reais", nome);
else if (idade>59 & idade<=65)
    printf("%s  voce ira  pagar 250.00 reais", nome);
else if (idade>65)
    printf("%s  voce ira  pagar 400.00 reais", nome);
    
}

