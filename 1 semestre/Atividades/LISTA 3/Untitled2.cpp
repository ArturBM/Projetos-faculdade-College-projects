#include<stdio.h>
main()
{
	float nota1, nota2, resultado;
	printf("Informe uma nota 1:");
	scanf("%f", &nota1);
	printf("Informe a nota 2:");
	scanf("%f", &nota2);
	resultado= (nota1 + nota2)/2;
	printf("Suas notas foram: %.2f e %.2f", nota1, nota2);
	printf("\nSua media:%.2f", resultado);
}
