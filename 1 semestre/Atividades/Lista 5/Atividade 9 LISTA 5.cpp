#include<stdio.h>
main()
{
	float nota1, nota2, media;
	int i;
	char nome[30];
	
	for(i = 1; i<=15; i++)
	{
		printf("Qual o seu nome: ");
		fflush(stdin);
		gets(nome);
		
		printf("Qual sua primeira nota: ");
		scanf("%f", &nota1);
		
		printf("Qual a sua segunda nota: ");
		scanf("%f", &nota2);
		
		media= (nota1 + nota2)/2;
		
		printf("O nome: %s\n", nome);
		printf("Avaliacao 1: %.2f\n", nota1);
		printf("Avaliacao 2: %.2f\n", nota2);
		printf("A media: %.2f\n", media);
		
	}
	
	
	 
}
