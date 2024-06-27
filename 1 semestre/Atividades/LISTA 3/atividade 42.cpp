#include<stdio.h>
main()
{
	int polegadas, pe, jarda, milha;
	printf("Me fale uma distancia em pes que irei tranformar: ");
	scanf("%i", &pe);
	polegadas = 12 * pe;
	jarda = 3 * pe;
	milha = 1760 * jarda;
	printf("Sua medida em polegadas fica: %i\n ", polegadas);
	printf("Sua medida em jardas fica: %i\n", jarda);
	printf("Sua medida em milhas fica: %i\n",milha);
	
 } 
