#include<stdio.h>
main()
{
	float nota1, nota2, media;
	
	
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	
	
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	
	
	media = (nota1 + nota2)/2;
	
	
	if(media>=6)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Reprovado");
	}
	
	
}
