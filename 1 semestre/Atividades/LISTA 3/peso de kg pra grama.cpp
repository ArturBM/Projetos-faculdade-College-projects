#include<stdio.h>
main()
{
	float pesokg, pesograma;
	printf("Informe seu peso em KG: ");
	scanf("%f", &pesokg);
	pesograma = (pesokg * 1000);
	printf("Seu peso em gramas fica: %.2f", pesograma);
	
	
	
}

