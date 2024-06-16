#include<stdio.h>
main()
{
	
	
	int i,num, soma = 0,neg =0;
	for( i = 1; i<= 6; i++)
	{
		printf("Informe o numero %i: ", i); //fiz isso para mostrar qual numero informar top top
		scanf("%i", &num);
		
		if(num<0)
		{
			neg++;
		}
		else 
		{
			soma = soma + num;
		}
		printf("A soma dos positivo e: %i\n", soma);
		
		printf("A soma dos negativo e: %i\n", neg);
	
	
	}
	
	
	
}

// for( inicio; (enquanto) condicao; incremento
//i++ é o mesmo que i = i+1
