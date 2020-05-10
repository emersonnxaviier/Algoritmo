/*
Construir um programa para criar uma estrutura para 
armazenar os dados de 10 funcionarios contendo: matricula 
do tipo inteiro, nome do tipo char com 50 caracteres, 
sexo do tipo char e salario do tipo float. O programa 
devera disponibilizar as seguintes opcoes para usuario: 
  1) Inserir um funcionario;
  2) Listar todos os funcionarios (completo);
  2) Listar todos os funcionarios do sexo feminino;
  4) Immprimir o(s) funcioario(s) com o maior salario;
  5) Listar o todos os funcionarios com salário maior 
     que média;
  6) Imprimir o funcionario do sexo masculino com o 
     menor salario.
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Funcionario 
{
	int  matricula;
	char nome[50];
	char sexo;
	float salario;
};

void imprimirMenu()
{
	system("cls");
	printf("Opcoes:\n");
	printf("  1 - Inserir um funcionario\n");
	printf("  2 - Listar todos os funcionarios;\n");
	printf("  3 - Listar todos os funcionarios do sexo feminino;\n");
	printf("  4 - Imprimir o(s) funcioario(s) com o maior salario;\n");
	printf("  5 - Listar o todos os funcionarios com salário maior que média;\n");
	printf("  6 - Imprimir o funcionario do sexo masculino com o menor salario.\n");
	printf("  0 - Sair\n");
	printf("Digite a opcao: ");
}

void main()
{
	int tam   = 6;
	int cont  = 0;
	int opcao = 0;
	struct Funcionario fs[ tam ];
	float maior = 0;
	float menor = 1000000;
	float media = 0;
	float soma  = 0;
	
	do
	{
		imprimirMenu();
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1:
				if ( cont < tam )
				{
					printf(" - Matricula: ");
					scanf("%d", &fs[cont].matricula);
					fflush(stdin);
		
					printf(" - Nome.....: ");
					scanf("%s", &fs[cont].nome);
					fflush(stdin);
		
					printf(" - Sexo.....: ");
					scanf("%c", &fs[cont].sexo);
					fflush(stdin);	
					
					printf(" - Salario..: ");
					scanf("%f", &fs[cont].salario);
					fflush(stdin);
					cont++;
				}
				else
				{
					printf("Vetor Cheio!\n");
					system("PAUSE");
				}
			break;
			case 2:
				printf("Matricula  | Nome                  | Sexo   | Salario\n");
				int i = 0;
				for( i = 0; i < cont; i++)
				{
					printf("%9d    %-24s   %-3c   %.2f\n", fs[i].matricula, fs[i].nome, fs[i].sexo, fs[i].salario );
				}
				system("PAUSE");
			break;
			case 3:
				printf("Matricula  | Nome                  | Sexo   | Salario\n");
				for( i = 0; i < cont; i++)
				{
					if ( fs[i].sexo == 'F' || fs[i].sexo == 'f' )
						printf("%9d    %-24s   %-3c   %.2f\n", fs[i].matricula, fs[i].nome, fs[i].sexo, fs[i].salario );
				}
				system("PAUSE");
			break;
			case 4:
				//Achar o maior salario
				for( i = 0; i < cont; i++)
				{
					if ( fs[i].salario >= maior )
						maior = fs[i].salario;
				}
				//Imprimir os funcionarios com maior salario
				printf("Matricula  | Nome                  | Sexo   | Salario\n");
				for( i = 0; i < cont; i++)
				{
					if ( fs[i].salario == maior )
						printf("%9d    %-24s   %-3c   %.2f\n", fs[i].matricula, fs[i].nome, fs[i].sexo, fs[i].salario );
				}
				system("PAUSE");
			break;
			case 5:
				//Achar o soma
				for( i = 0; i < cont; i++)
				{
					soma = soma + fs[i].salario;
				}
				//Calcular a media
				media = soma / cont;
				//Imprimir os funcionarios com maior salario
				printf("Matricula  | Nome                  | Sexo   | Salario\n");
				for( i = 0; i < cont; i++)
				{
					if ( fs[i].salario > media )
						printf("%9d    %-24s   %-3c   %.2f\n", fs[i].matricula, fs[i].nome, fs[i].sexo, fs[i].salario );
				}
				system("PAUSE");				
			break;
			case 6:
				//Achar o menor salario
				for( i = 0; i < cont; i++)
				{
					if ( ( fs[i].sexo == 'M' || fs[i].sexo == 'm') && fs[i].salario < menor )
						menor = fs[i].salario;
				}
				//Imprimir os funcionarios com maior salario
				printf("Matricula  | Nome                  | Sexo   | Salario\n");
				for( i = 0; i < cont; i++)
				{
					if ( ( fs[i].sexo == 'M' || fs[i].sexo == 'm') && fs[i].salario == menor )
						printf("%9d    %-24s   %-3c   %.2f\n", fs[i].matricula, fs[i].nome, fs[i].sexo, fs[i].salario );
				}
				system("PAUSE");	
			break;			
		}
	}
	while ( opcao != 0 );
}
