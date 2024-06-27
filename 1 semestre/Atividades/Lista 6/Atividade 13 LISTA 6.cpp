#include<stdio.h>
main()
{
	int num,cont=0, maior=-99999,menor=99999,par=0;
	float soma=0;
	float somap=0, imp=0, perc;
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	while(num!=30000)
	{
		soma=soma+num;
		cont++;
		if(num>maior)
		{
			maior=num;
		}
		if(num<menor)
		{
			menor=num;
		}
		if(num%2==0)
		{
			somap= somap+num;
				par++;
		}
		else
		{
			imp++;
		}
		printf("Informe um numero: ");
		scanf("%d", &num);
	}

	printf("A soma foi: %.2f\n", soma);
	printf("A quantidade de numeros digitados foi: %d\n", cont);
	printf("A media foi: %.2f\n", soma/cont);
	printf("O maior e: %d\n", maior);
	printf("O menor e: %d\n", menor);
	printf("A media dos numeros pares foi: %.2\n", somap/par);
	perc = (imp/cont)*100;
	printf("O percentual de impares foi: %.2f\n",perc);
}
