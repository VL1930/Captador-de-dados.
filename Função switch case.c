#include <stdio.h> //biblioteca de comunica�ao com o usur�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca responsavel por cuidar das string

int registro()//fun�oes 
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf);// Responsavel por copiar os valores das string
	
	FILE *file;// cria o arquivo
	file = fopen(arquivo,"w");// cria o arquivo
	fprintf(file,cpf);// salvo o valor da variavel 
	fclose(file);//fecha o arquivo
	
        	file = fopen(arquivo, "a");// abrindo o arquivo
        	fprintf(file,",");// colocando vigula para diferenciar a variavel
        	fclose(file);
	
	printf("Digite o nome a ser cadastrado:  ");
	scanf("%s",nome);
	
	    file = fopen(arquivo, "a");
    	fprintf(file,nome);
    	fclose(file);
	
	        file = fopen(arquivo, "a");// abrindo o arquivo
	        fprintf(file,",");// colocando vigula para diferenciar a variavel
        	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	fclose(file);
	
	   file = fopen(arquivo, "a");
	   fprintf(file,sobrenome);
	   fclose(file);
	
	      file = fopen(arquivo, "a");// abrindo o arquivo
	      fprintf(file,",");// colocando vigula para diferenciar a variavel
	      fclose(file);
	
	printf("Digite o cargo a ser cadastrado : ");
	scanf("%s",cargo);
	
	    file = fopen(arquivo,"a");
	    fprintf(file,cargo);
	    fclose(file);
	
        	file = fopen(arquivo, "a");// abrindo o arquivo
        	fprintf(file,",");// colocando vigula para diferenciar a variavel
	        fclose(file);
	
	system("pause");
	
	
}

int consulta()
{
	setlocale(LC_ALL,"Portuguese");//definindo linguagem
	
	
	char cpf[40];
	char conteudo[200];
	
	printf("digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file== NULL)
	{
		printf("N�o foi possivel abrir o arquivo,n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	
	printf("Voc� escolheu deletar nomes!\n");
    system("pause");
}

int main()

        {
        	int opcao=0;// definindo variaveis 
        	int laco=1;
        	
        	for(laco=1;laco=1;)
        	{
        		
        		system("cls");
        		
        		   setlocale(LC_ALL,"Portuguese");//definindo linguagem
        		
        		
        		   
        		      printf("### Cart�rio da EBAC ###\n\n");// inicio do menu
	                  printf("Escolha a op��o desejada do menu:\n\n");
                      printf("\t1 - Registar Nomes\n");
              	      printf("\t2 - Consultar Nomes\n");
             	      printf("\t3 - Deletar Nomes\n\n");
             	      printf("\t4 - Sair do sistema\n\n");
             	      printf("op��o: ");// fim do menu
             	   
             	scanf("%d", &opcao);// armazenando a escolha do usuario
             	   
             	system("cls");   
             	
             	switch(opcao)//inicio da sele��o
             	      {
             	      	case 1:
             	      	registro();
             	      	break;
             	      	
             	      	case 2:
             	      	consulta();
             	      	break;
             	      	
             	      	case 3:
             	      	deletar();
             	      	break;
             	      	
             	      	case 4:
             	      	printf("Obrigado por utilizar o sistema !\n");
						return 0;// retorna valor 0 , quebrando o la�o criado.
						break;	
             	      	
             	      	default:
             	      	printf("essa op��o n�o esta disponivel!\n");
             	      	system("pause");
             	      	break;
             	      	}
             	      	      	
			}
		}
