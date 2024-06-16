#include<stdio.h>
main()
{
	char nome[20];
	float valor;
	
	printf("Informe o valor da venda: ");
	scanf("%f", &valor);
	
	printf("Informe o nome do produto: ");
	scanf("%s", &nome);
	
	printf("O seu produto e: %s\n", nome);
	
	if(valor < 10)
	{
		printf("O lucro da sua venda foi de: %.2f\n", (valor * 0.3));
	}
	else if(valor < 30)
	{
		printf("O lucro da sua venda foi de: %.2f\n", (valor * 0.5));
	}
	else if (valor < 50)
	{
		printf("O lucro da sua venda foi de: %.2f\n", (valor * 0.6));
	}
	else 
	{
		printf("O lucro da sua venda foi de: %.2f\n", (valor * 0.7));
	}
	
	
	
}
