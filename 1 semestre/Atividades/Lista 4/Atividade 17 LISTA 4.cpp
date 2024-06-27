#include<stdio.h>
main()
{
	int idade, peso, risco;
	
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	
	
	printf("Me informe seu peso: ");
	scanf("%i", &peso);
	
	if(idade < 20)
	{
		if(peso <=60)
		{
			risco = 9;
		}
		else if(peso <90)
		{
			risco = 8;
		}
		else
		{
			risco = 7;
		}
	}
	else if( idade < 50)
	{
				if(peso <=60)
		{
			risco = 6;
		}
		else if(peso <90)
		{
			risco = 5;
		}
		else
		{
			risco = 4;
		}
	}
	else
	{
				if(peso <=60)
		{
			risco = 3;
		}
		else if(peso <90)
		{
			risco = 2;
		}
		else
		{
			risco = 1;
		}
	}
	
	printf("Voce se encaixa no grupo de risco: %i", risco);
	
	}
	
	

