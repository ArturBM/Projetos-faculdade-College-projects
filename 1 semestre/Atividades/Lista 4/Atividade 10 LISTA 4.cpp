#include<stdio.h>
main()
{
	int aumento, salimput;
	
	
	printf("Qual seu salario: ");
	scanf("%i", &salimput);
	
	
	aumento = salimput * 1.3;
	
	if(salimput < 1500 )
	{
		printf("Seu novo salario teve um aumento e ficou %i", aumento);
	}
	else
	{
		printf("Voce nao teve nenhum aumento !");
	}
	
	
}
