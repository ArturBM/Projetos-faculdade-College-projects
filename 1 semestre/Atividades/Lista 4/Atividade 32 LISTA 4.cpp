#include<stdio.h>
main()
{
	char nome[30];
	float salimput, tempo, imposto, grat, salario;
	
	printf("Qual o seu nome: ");
	scanf("%s", &nome);
	
	printf("Qual seu salario base: ");
	scanf("%f", &salimput);
	
	printf("Quanto tempo de trabalho: ");
	scanf("%f", &tempo);
	
	printf("Nome: %s\n", nome);
	
	if(salimput <200)
	{
		printf("Voce e isento de imposto\n");
	}
	else if(salimput <= 450 )
	{
		imposto = 0.3;
	}
	else if(salimput < 700)
	{
		imposto = 0.8;
	}
	else 
	{
		imposto = 0.12;
	}
	
	if(salimput > 500)
	{
		if(tempo <= 3)
		{
			grat = 1.2;
		}
		else
		{
			grat = 1.3;
		}
		
	}
	else 
	{
		if(tempo <=3)
		{
			grat= 1.23;
		}
		else if(tempo <6)
		{
			grat=1.35;
		}
		else
		{
			grat=1.33;
		}
	}
	salario = (salimput * grat) - (salimput * imposto);
	printf("O seu imposto e: %.2f\n", salimput * imposto);
	printf("O seu salario com gratificacao ficou: %.2f\n", (salimput * grat));
	printf("Seu salario liquido ficou: %.2f\n", salario);
	
	
	
}
