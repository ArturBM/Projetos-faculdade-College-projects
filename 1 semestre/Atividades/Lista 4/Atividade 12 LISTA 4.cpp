#include<stdio.h>

main()
{
	int salimput;
	
	printf("Qual seu salario medio no ultimo ano: ");
	scanf("%i", &salimput);
	
	if(salimput <= 2000)
	{
		printf("Seu credito no nosso banco ficou: %i", (int)(salimput * 1.1));
	}
	else if(salimput < 3000)
	{
		printf("Seu credito no nosso banco ficou: %i", (int)(salimput * 1.2));
	}
	else if(salimput < 4000)
	{
		printf("Seu credito no nosso banco ficou: %i", (int)(salimput * 1.25));
	}
	else
	{
		printf("Seu credito no nosso banco ficou: %i", (int)(salimput * 1.30));
	}
	

}

