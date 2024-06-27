#include<stdio.h>
#include<string.h>
main()
{
	int categoriaimput, precoimput, situacao, aumento, imposto, novopreco;
	char classificacao[15];
	
	printf("Qual o preco do produto: ");
	scanf("%i", &precoimput);
	
	printf("Seu produto eh categoria 1, 2 ou 3: ");
	scanf("%i", &categoriaimput);
	
	printf("Informe R se seu produto precisa de refrigeracao\n Informe N se nao precisa de refrigeracao: ");
	scanf("%i", &situacao);
	
	
	if(precoimput <= 25)
	{
		if(categoriaimput == 1)
		{
			aumento = precoimput * 1.05;
		}
		else if(categoriaimput == 2)
		{
			aumento = precoimput * 1.08;
		}
		else
		{
			aumento = precoimput * 1.1;
		}
	}	
	else if(precoimput > 25)
	{
		if(categoriaimput == 1)
		{
			aumento = precoimput * 1.12;
		}
		else if(categoriaimput == 2)
		{
			aumento = precoimput * 1.15;
		}
		else
		{
			aumento =precoimput * 1.18;
		}
	}
	if(categoriaimput == 2 && situacao == 'R')
	{
		imposto = precoimput * 0.05;
	}

	else
		{
			imposto = precoimput * 0.08;
		}
		
				novopreco = precoimput + imposto;
		
	if(novopreco <= 50)
	{
		strcpy(classificacao, "Barato");
	}
	else if(novopreco < 120)
	{
		strcpy(classificacao, "Normal");
	}
	else
	{
		strcpy(classificacao, "Caro");
	}
		
		printf("O valor do seu aumento e: %i\n", aumento - precoimput);
		printf("O valor do imposto e: %i\n",imposto );
		printf("O novo preco e: %i\n", aumento - imposto);
		printf("A classificacao do produto e: %s\n", classificacao);
		
	}
	
	
	

