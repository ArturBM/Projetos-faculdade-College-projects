#include<stdio.h>
main()
{
	int xnum1, xnum2;
	float x;
	
	
	printf("Me informe o Primeiro numero: ");
	scanf("%i", &xnum1);
	
	
	printf("Me informe outro numero agora: ");
	scanf("%i", &xnum2);
	
	
	x = (float) xnum1 + xnum2 + (2 *(xnum1 - xnum2));
	
	printf("O valor de X e igual a: %.1f", x);
	
	
	
	
	
}
