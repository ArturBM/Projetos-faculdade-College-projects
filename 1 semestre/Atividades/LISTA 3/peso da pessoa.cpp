#include<stdio.h>
main()
{
	float peso1, peso2, peso3;
	printf("Informe seu peso: ");
	scanf("%f", &peso1);
	peso2 = (peso1 * 1.15);
	peso3 = (peso1 * 0.8);
	printf("Seu peso com 15 porcento a mais fica: %.2f\n", peso2);
	printf("Seu peso com 20 porcento menos fica: %.2f", peso3);
	
	
	
}
