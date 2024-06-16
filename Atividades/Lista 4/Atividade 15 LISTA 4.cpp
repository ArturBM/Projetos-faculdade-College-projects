#include<stdio.h>
main()
{
	int precoimput, preco5,preco10,preco15;
	
	printf("Me informe o preco do produto: ");
	scanf("%i", &precoimput);
	
	preco5 = precoimput * 1.05;
	preco10 = precoimput * 1.1;
	preco15 = precoimput * 1.15;
	
	
	
	
	
	if(precoimput <= 50)
	{
		printf("O novo preco do produto ficou: %i\n", preco5);
		
		
		if(preco5 <80)
		{
			printf("A classificacao do produto e: barata");
		}
			
	}

	else if(precoimput <=100)
	{
		printf("O novo preco do produto ficou: %i\n", preco10);	
		
		if(preco10 >80 && preco10 < 120)
		{
			printf("A classificacao do produto e: normal");
		}
			
	}
	
	else
	{
		printf("O novo preco do produto ficou: %i\n", preco15);
		
	if(preco15 > 120 && preco15 < 200)
	{
		printf("A classificacao do produto e: caro");
	}
	else
	{
		printf("A classificacao do produto e: muito caro");	
	}
	
	}


}


