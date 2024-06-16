#include<stdio.h>
main()
{
	int num1, num2; 
	
	
	printf("Informe um numero: ");
	scanf("%i", &num1);
	
	
	printf("Informe outro numero: ");
	scanf("%i", &num2);
	
	if(num1 > num2)
	{
		printf("O maior numero eh: %i\n", num1);
		printf("O menor numero eh: %i", num2);
		
	}
	else
		printf("O maior numero eh: %i\n", num2);
		printf("O menor numero eh: %i", num1);
}
