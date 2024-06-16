#include<stdio.h>
main()
{
	int aumento30,aumento15,  salimput;
	
	
	printf("Qual seu salario: ");
	scanf("%i", &salimput);
	
	aumento15 = salimput * 1.15;
	aumento30 = salimput * 1.35;
	
	if(salimput < 1500 )
	{
		printf("Seu novo salario teve um aumento e ficou %i", aumento30);
	}
	else
	{
		printf("Seu novo salario teve um aumento e ficou %i", aumento15);
	}
	
	
}
