#include<stdio.h>
main()
{
	float salario, conta1, conta2, salfinal, multa;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("Informe sua conta atrasada: ");
	scanf("%f", &conta1);
	printf("Informe sua outra conta atrasada: ");
	scanf("%f", &conta2);
	multa = 1.02;
	salfinal = (salario  (( conta1 * multa) + (conta2 * multa)));
	printf("Seu salario ficara = %f", salfinal);
	
	
	
	
}
