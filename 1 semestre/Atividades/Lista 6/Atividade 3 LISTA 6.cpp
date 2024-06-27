#include<stdio.h>
main()
{
	int num, cont=0;
	
	printf("Me informe um numero: ");
	scanf("%d", &num);
	
	while(num > 0 )
	{
		
		printf("%d", num);
		
		cont++;
		
		printf("Me informe um numero: ");
		scanf("%d", &num);
	
		
	}
		printf("Foram digitados %d numeros", cont);
	
}
