#include<stdio.h>
main()
{
	int idade;
	char sexo;
	float soma= 0;
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	int cont=0;
	int masc= 0, fem=0;
	while(idade !=0)
	{
		printf("Informe M/F para sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
		
		soma = soma + idade;
		cont++;
		
		if(sexo == 'M' || sexo == 'm')
		{
			 masc++;
		}
		else if(sexo=='F'|| sexo =='f')
		{
			fem++;
		}
		printf("Informe sua idade: ");
		scanf("%d", &idade);
	}
	
	printf("A idade media: %d", idade/cont);
	printf("O total de homens e: %d", masc);
	printf("O total de mulher e: %d", fem);
}
