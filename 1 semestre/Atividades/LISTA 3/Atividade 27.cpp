#include<stdio.h>
main()
{
	float nota1, nota2, nota3, media;
	
	
	printf("Quanto voce tirou na primeira prova: ");
	scanf("%f", &nota1);
	
	
	printf("Quanto voce tirou na segunda prova: " );
	scanf("%f", &nota2);
	
	
	printf("Quanto voce tirou na terceira prova: ");
	scanf("%f", &nota3);
	
	
	media = (nota1 + nota2 + nota3) / 3;
	
	
	printf("A media aritmetica ficou %.1f", media);
	

}
