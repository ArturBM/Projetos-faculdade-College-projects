#include<stdio.h>
main()
{
	int fibonacci, num1, num2, numimput ;
	
	
	printf("Me informe um numero: ");
	scanf("%i", &numimput);
	
	
	num1= 0;
	num2= 1;
	
	
	while (numimput > fibonacci)
	{
		fibonacci = num1 + num2;
		num1 = num2;
		num2 = fibonacci;
	}
	
	if (numimput == fibonacci)
	{
		
		printf("%i pertence a sequencia de fibonacci.\n", numimput);
		
	}
	else
	{
		printf("%i nao pertence a sequencia de fibonacci.\n",numimput);
	}
	
}
