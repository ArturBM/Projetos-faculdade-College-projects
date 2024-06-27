#include<stdio.h>
main()
{
	
	int maior= -999;
	int menor= 999;
	int num;
	int cont=0;
	int soma=0;
	printf("Me informe um numero: ");
	scanf("%d", &num);
	while(num > 0)
	{
		
		cont++;
		soma = soma + num;
		if(num > maior)
		{
			maior = num;
		}
		else if(num < menor)
		{
			menor = num;
		}
	
	printf("Informe outro: ");
	scanf("%d", &num);	
	}
	printf(" O maior e: %d", maior);
	printf(" O menor e: %d", menor);
	printf(" A media e: %d", soma/cont);
	
	
}
