#include<stdio.h>
main()
{
	int pnum, snum, multi, soma, sub;
	float div;
	
	
	printf("Informe o numero 1: ");
	scanf("%i", &pnum);
	
	
	printf("Informe o numero 2: ");
	scanf("%i", &snum);
	
	
	multi = pnum * snum;
	soma = pnum + snum;
	sub = pnum - snum;
	div = (float) pnum / snum;
	
	printf("Primeiro numero: %i\t\t Segundo numero: %i\n", pnum, snum);
	printf("Soma: %i\n", soma);
	printf("Subtracao: %i\n", sub);
	printf("Multiplicacao: %i\n", multi);
	printf("Divisao: %.1f", div);
	
	
	
}
