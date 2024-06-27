#include<Stdio.h>
main()
{
	int i, num, neg = 0, soma=0;
	for(i = 1; i<=20 ; i ++)
	{
		printf("Informe um numero: ");
		scanf("%i", &num);
		
		if(num < 0)
		{
			neg++; //pode ser neg = neg + 1;
		}
		else
		{
			soma = soma + num;
		}
		
	}
	
	printf("A soma dos positivos e: %i\n", soma);
	printf("A quantidade de negativos e: %i\n",neg);
	
	
}
