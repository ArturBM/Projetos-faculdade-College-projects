#include<stdio.h>
main()
{
	int simput; 
	
	printf("Qual seu salario atual: ");
	scanf("%i", &simput);
	
	if(simput < 3000)
	{
		printf("Voce teve um aumento e seu novo salario ficou: %i", (int)(simput * 1.15));
	}
	else if(simput < 6000)
	{
		printf("Voce teve um aumento e seu novo salario ficou: %i", (int)(simput * 1.1));
	}
	else if( simput < 9000)
	{
		printf("Voce teve um aumento e seu novo salario ficou: %i", (int)(simput * 1.05));
	}
	else
	{
		printf("Voce nao ganhou um aumento de salario!");
	}
	
	
}
