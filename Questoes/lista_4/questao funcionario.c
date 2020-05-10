#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

struct funcionario{
	int matricula;
	char nome[50];
	char sexo;
	float salario;
};

void GerarMenu(){
	
   setlocale(LC_ALL, "Portuguese_Brazil");
	
  system("cls");
  printf("\tMENU");
  printf("\n1 -  Inserir um funcionario");
  printf("\n2 -  Listar todos os funcionarios (completo)");
  printf("\n3 -  Listar todos os funcionarios do sexo feminino");
  printf("\n4 -  Immprimir o(s) funcioario(s) com o maior salário");
  printf("\n5 -  Listar o todos os funcionarios com salário maior  que média");
  printf("\n6 -  Imprimir o funcionario do sexo masculino com o  menor salário");
  printf("\n0 -  sair");
  printf("\nDigite a opcao: ");
}

void main(){
	int opcao = 0, tam = 10, cont = 0,  maior=0,  soma = 0, menor=100000;
	
   struct funcionario func[tam];
    float media = 0;

void AdicionarFuncionario(){
	
	if(cont<tam)
	{
	printf("Matricula: ");
	scanf("%d", &func[cont].matricula);
	fflush(stdin);

	printf("Nome: ");
	scanf("%[^\n]s", &func[cont].nome);
	fflush(stdin);
	
	printf("Sexo: ");
	scanf("%c", &func[cont].sexo);
	fflush(stdin);
	
	printf("Salário: ");
	scanf("%f", &func[cont].salario);
	fflush(stdin);
	cont++;
	}else{
		
		printf("\n\nMemoria Cheia..\n\n");
		system("PAUSE");
	}
}

void ListaFuncionario(){
   printf("\nTodos os funcionarios..\n\n");
   	int i=0;
   	for(i=0;i<cont;i++){
   		printf("\nMatricula: %d\t|\tNome: %s\t|\tSexo: %c\t|\tsalario: %.2f\t|\n", func[i].matricula, func[i].nome, func[i].sexo, func[i].salario );
	   }
}

void ListarFuncionariosFemininos(){
	printf("\nTodos os funcionarios femininos..\n\n");
   	int i=0;
   	for(i=0;i<cont;i++){
   	if( func[i].sexo == 'F' || func[i].sexo == 'f' )
   	printf("\nMatricula: %d\t|\tNome: %s\t|\tSexo: %c\t|\tsalario: %.2f\t|\n", func[i].matricula, func[i].nome, func[i].sexo, func[i].salario ); 
	  }
}
void FuncionarioMaiorSalario(){
	printf("\nFuncionario(s) com maior salario..\n\n");
   	int i=0;
   	for(i=0;i<cont;i++){
   		
   	if(func[i].salario >= maior)
   	maior=func[i].salario;}
   	
   	for(i=0;i<cont;i++){
   	if(func[i].salario==maior)
   	printf("\nMatricula: %d\t|\tNome: %s\t|\tSexo: %c\t|\tsalario: %.2f\t|\n", func[i].matricula, func[i].nome, func[i].sexo, func[i].salario ); 
	  }
}
void SalarioMaiorqueMedia(){
	int i=0;
	for(i=0;i<cont;i++){
	soma = soma+func[i].salario;
 }
 media = soma/cont;
 
   	for(i=0;i<cont;i++){
    if(func[i].salario>media)
   	printf("\nMatricula: %d\t|\tNome: %s\t|\tSexo: %c\t|\tsalario: %.2f\t|\n", func[i].matricula, func[i].nome, func[i].sexo, func[i].salario ); 
  }
}
void FuncMascMenorSalario(){
	
	int i=0;
    for(i=0;i<cont;i++){
    if((func[i].sexo == 'm'||func[i].sexo == 'M') && func[i].salario < menor )
    menor=func[i].salario; }
     for(i=0;i<cont;i++){
     if((func[i].sexo == 'm'||func[i].sexo == 'M') && func[i].salario == menor )
   	printf("\nMatricula: %d\t|\tNome: %s\t|\tSexo: %c\t|\tsalario: %.2f\t|\n", func[i].matricula, func[i].nome, func[i].sexo, func[i].salario ); 
	  }
}

   do{ 
   GerarMenu();
   scanf("%d", &opcao);
   switch (opcao){
   	case 1:
   	    AdicionarFuncionario();
   	    system("PAUSE");
   	    break;
   	    
   	case 2:
   	    ListaFuncionario();
   		system("PAUSE");
	    break;
	    
   	case 3:
     	ListarFuncionariosFemininos();
   		system("PAUSE");
   	    break;
   	    
   	case 4:
   		FuncionarioMaiorSalario();
   	   	system("PAUSE");
   	    break;
   	    
   	case 5:
   		SalarioMaiorqueMedia();
   		system("PAUSE");
   	    break;
		   		
   	case 6:
   		FuncMascMenorSalario();
  		system("PAUSE");
   	    break;
		  	
   	case 0:
   		exit(0);
   	    break;
   	default:
   		printf("\n\nOpção invalida!!\n\nTente Novamente..\n\n");
   	    system("PAUSE");
   }
  
} while(opcao != 0);


}



