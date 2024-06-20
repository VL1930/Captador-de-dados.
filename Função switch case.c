#include <stdio.h> //biblioteca de comunicaçao com o usurário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h>//biblioteca responsavel por cuidar das string

int registro()//funçoes 
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
		printf("Não foi possivel abrir o arquivo,não localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	
	printf("Você escolheu deletar nomes!\n");
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
        		
        		
        		   
        		      printf("### Cartório da EBAC ###\n\n");// inicio do menu
	                  printf("Escolha a opção desejada do menu:\n\n");
                      printf("\t1 - Registar Nomes\n");
              	      printf("\t2 - Consultar Nomes\n");
             	      printf("\t3 - Deletar Nomes\n\n");
             	      printf("\t4 - Sair do sistema\n\n");
             	      printf("opção: ");// fim do menu
             	   
             	scanf("%d", &opcao);// armazenando a escolha do usuario
             	   
             	system("cls");   
             	
             	switch(opcao)//inicio da seleção
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
						return 0;// retorna valor 0 , quebrando o laço criado.
						break;	
             	      	
             	      	default:
             	      	printf("essa opção não esta disponivel!\n");
             	      	system("pause");
             	      	break;
             	      	}
             	      	      	
			}
		}
