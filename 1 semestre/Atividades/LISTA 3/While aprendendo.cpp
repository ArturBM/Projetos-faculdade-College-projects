#include<Stdio.h>
main()
{
	int i, num, cont;
	float soma=0;
		printf("Informe um numero: ");
		scanf("%d", &num);
	while(num>0)
	{
	cont++;
		soma= soma + num;
		printf("Informe um numero: ");
		scanf("%d", &num);
	}
	printf("A soma e: %.2f\n",soma);
	printf("A media e: %.2f\n", soma/cont);
	
	
	
}
