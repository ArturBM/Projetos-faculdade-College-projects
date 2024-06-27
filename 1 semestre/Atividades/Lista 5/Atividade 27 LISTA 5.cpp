#include<stdio.h>
main()
{
	int i,a, nota, per=0;
	float soma=0, media, somamedia;
	for(i=1;i<=20;i++)
	{
		printf("aluno %d\n", i);
		for(a=1; a<=5; a++)
		{
			printf("Informe sua nota: ");
			scanf("%d", &nota);
			
			soma = soma + nota;
		}
		media = soma/5;
		soma=0;
if(nota >= 5)
			{
				per++;
			}

		printf("A media e: %.2f\n", media);
		somamedia = somamedia + media;
	}
	somamedia = somamedia + media;
	printf("A media da turma e: %.2f\n", somamedia/20);
	printf("O percentual de pessoas que tiveram a nota maior que 5 e: %d porcento", (per/20)*100);
	
	}

