#include<stdio.h>
main()
{
	int num1, ante, suce; 
	
	
	printf("Informe um numero: ");
	scanf("%i", &num1);
	
	
	ante = num1 - 1;
	suce = num1 + 1;
	
	
	printf("O numero sucessor dele e: %i\n", suce);
	printf("O numero antecessor dele e %i", ante);
	
	
	
}
