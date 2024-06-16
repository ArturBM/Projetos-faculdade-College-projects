#include<stdio.h>
main()
{
	int A, B, C;
	
	printf("Me informe um Valor para A: ");
	scanf("%i", &A);
	
	printf("Me informe outro valor para B: ");
	scanf("%i", &B);
	
	printf("BOW\n");
	C = A;
	A = B;
	B = C;
	
	printf("Agora o valor de A ficou %i\n", A);
	printf("Agora o valor de B ficou %i", B);
	
	
	
}
