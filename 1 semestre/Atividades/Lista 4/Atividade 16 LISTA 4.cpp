#include<stdio.h>
main()
{
	int codimput, precoimput; 
	
	printf("Qual o preco do produto: ");
	scanf("%i", &precoimput);
	
	printf("Qual o codigo do produto: ");
	scanf("%i", &codimput);
	
	
	if(codimput == 1)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Sul");	
	}	
	
	else if(codimput == 2)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Norte");	
	}	
	
		else if(codimput == 3)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Leste");	
	}	
	
		else if(codimput == 4)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Oeste");	
	}	
	
		else if(codimput == 5 && codimput ==6)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Norte");	
	}	

	else if(codimput >= 7 && codimput <= 9)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Sudeste");	
	}	
	
		else if(codimput >=10 && codimput <=20)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Centro-Oeste");	
	}	
	
		else if(codimput >=21 && codimput <=30)
	{
		printf("O preco do seu produto e: %i\n", precoimput);
		printf("Sua procedencia: Nordeste");	
	}	
}
