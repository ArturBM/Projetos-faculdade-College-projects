#include<stdio.h>
main()
{
	float media, nota1, nota2;
	
	
	printf("Informe sua primeira nota: ");
	scanf("%f", &nota1);
	
	
	printf("Informe sua segunda nota: ");
	scanf("%f", &nota2);
	
		media = (nota1 + nota2)/2;
		
		
	if(media >= 7)
	{
		printf("Aprovado!");
	}
	else if(media > 3)
	{
		printf("Exame final");
	}
	else
	{
		printf("Reprovado");
	}
	
	
	
	
	
	
}
