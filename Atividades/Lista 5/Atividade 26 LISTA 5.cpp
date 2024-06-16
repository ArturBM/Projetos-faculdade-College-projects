#include<stdio.h>
main()
{
	int j,i;
	float nota;
	float soma=0;
	float media;
	int rep=0, ap=0, exa=0;
	float somamedia=0;
	for( i=1; i<=6;i++)
	{
		printf("Aluno %d\n", i);
		
		for(j=1;j<=2;j++)
		{
			
			printf("Informe sua nota: ");
			scanf("%f", &nota);
			soma = soma + nota;
		}
		media = soma/2;
		somamedia=somamedia + media;
		soma = 0;
		printf("A media foi: %.2f\n", media);
		
		if(media<3)
		{
			printf("Reprovado\n");
			rep++;
		}
		else if(media<7)
		{
			printf("Exame\n");
			exa++;
		}
		else
		{
			printf("Aprovado\n");
			ap++;
		}
		printf("A quantidade de aprovados e %i\n", ap);
		printf("A quantidade de exame e %i\n", exa);
		printf("A quantidade de reprovados e %i\n", rep);
		printf("A media da classe foi: %.2f\n", somamedia/6);
	}
	
}
