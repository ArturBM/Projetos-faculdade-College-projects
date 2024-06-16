#include<stdio.h>
main()
{
		int num1, num2, num3; 
	
	
	printf("Informe um numero: ");
	scanf("%i", &num1);
	
	
	printf("Informe outro numero: ");
	scanf("%i", &num2);
	
	printf("Informe o ultimo numero: ");
	scanf("%i", &num3);
	
	if(num1 < num2 && num1 < num3)
	{
		printf("O menor numero eh: %i\n", num1);
	}
	else if(num2 < num1 && num2 < num3)
	{
		printf("O menor numero eh: %i\n", num2);
	}
	else 
	{
		printf("O menor numero eh %i\n", num3);			
	}
}
