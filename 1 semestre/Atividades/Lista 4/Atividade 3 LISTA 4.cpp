#include<stdio.h>
main()
{
		float nota1, nota2, nota3, nota4, media;
		
		printf("Informe a sua primeira nota: ");	
	scanf("%f", &nota1);
	
	
		printf("Informe a sua segunda nota: ");	
	scanf("%f", &nota2);
	
	
	
		printf("Informe a sua terceira nota: ");	
	scanf("%f", &nota3);
	
	
	
		printf("Informe a sua quarta nota: ");	
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	if(media >= 6)
	{
		printf("Aprovado heheheheheeheheheh");
	}
	else
	{
		printf("Reprovado burrinho");
	}
	
	
	
}
