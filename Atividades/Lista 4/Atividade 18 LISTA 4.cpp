#include<stdio.h>
main()
{
	int codimput, quantimput, preco, total, desconto;


	printf("Qual o codigo do seu produto: ");
	scanf("%i", &codimput);
	
	
	printf("Informe a quantidade: ");
	scanf("%i", &quantimput);
	
		if(codimput >= 1 && codimput <= 10)
	{
		preco = 10;
	}
	else if(codimput >=11 && codimput <=20)
	{
			preco = 15;
	}
	else if( codimput >= 21 && codimput <=30)
{
			preco = 20;
}
	else if(codimput >=31 && codimput <=40)
	{
			preco = 30;
	}

	
	
	total = preco * quantimput;
	
			if(total < 250)
		{
			desconto = total*0.05;
		}
			else if(total <= 500)
			{
				desconto = total * 0.1;
			}
			else
			{
				desconto = total * 0.15;
			}
			
			
			
	if(codimput >= 1 && codimput <= 10)
	{
		printf("O preco do produto e: %i\n", preco);
		
		printf("O preco total da sua nota e: %i\n", preco * quantimput);
		
		printf("O valor de desconto e: %i\n",desconto );
		
		printf("O preco final e: %i\n", total - desconto);
	}
	else if(codimput >=11 && codimput <=20)
	{
		printf("O preco do produto e: %i\n", preco);
		
		printf("O preco total da sua nota e: %i\n", preco * quantimput);
		
		printf("O valor de desconto e: %i\n",desconto );
		
		printf("O preco final e: %i\n", total - desconto);
	}
	else if( codimput >= 21 && codimput <=30)
{
		printf("O preco do produto e: %i\n", preco);
		
		printf("O preco total da sua nota e: %i\n", preco * quantimput);
		
		printf("O valor de desconto e: %i\n",desconto );
		
		printf("O preco final e: %i\n", total - desconto);
}
	else if(codimput >=31 && codimput <=40)
	{
		printf("O preco do produto e: %i\n", preco);
		
		printf("O preco total da sua nota e: %i\n", preco * quantimput);
		
		printf("O valor de desconto e: %i\n",desconto );
		
		printf("O preco final e: %i\n", total - desconto);
	}
}
