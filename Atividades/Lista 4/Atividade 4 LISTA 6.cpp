#include<stdio.h>
main()
{
	int num, cont=0;
	
	printf("Me informe um numero: ");
	scanf("%d", &num);
	int soma=0;
	while(num > 0 )
	{
		
		printf("%d\n", num);
		
		cont++;
		soma = soma + num;
		printf("Me informe um numero: ");
		scanf("%d", &num);
	
		
	}
	float media = soma /cont;
		printf("A media e: %.2f\n", media);	
}
