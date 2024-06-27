#include<stdio.h>
main()
{
	float salmin, salario, qntmin;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	salmin = 1412;
	qntmin = (salario/ salmin);
	printf("Seu salario fica %.2f salarios minimos", qntmin);
	
	
	
}
