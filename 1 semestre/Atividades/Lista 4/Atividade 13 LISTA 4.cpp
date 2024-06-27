#include<stdio.h>
main()
{
	
	int precoimput;
	
	
	printf("Me informe o preço de fabrica do seu novo veiculo: ");
	scanf("%i", &precoimput);
	
	if( precoimput <= 15000)
	{
		printf("O valor com impostos e taxas fica igual a: %i", (int)(precoimput * 1.05));
	}
	else if(precoimput < 25000)
	{
		printf("O valor com impostos e taxas fica igual a: %i", (int)((precoimput * 1.1) + (precoimput * 1.15) - precoimput ));
		
	}
	else 
	{
		printf("O valor com impostos e taxas fica igual a: %i", (int)((precoimput * 1.15) + (precoimput * 1.2) - precoimput ));
	}

	
}
