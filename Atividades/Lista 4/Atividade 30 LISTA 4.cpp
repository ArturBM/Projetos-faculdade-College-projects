#include<stdio.h>
main()
{
	float salarioimput;
	
	printf("Informe seu salario: ");
	scanf("%f", & salarioimput);
	
	if(salarioimput <= 600)
	{
		printf("Seu salario e: %.2f\n", salarioimput);
		printf("Voce e isento de INSS\n");
	}
	else if(salarioimput <1200)
	{
		printf("Seu salario e: %.2f\n", (salarioimput * 0.2) );
		printf("Seu salario teve um desconto de 20 porcento, por conta do INSS");
	}
	else if(salarioimput < 2000)
	{
		printf("Seu salario e: %.2f\n", (salarioimput * 0.25) );
		printf("Seu salario teve um desconto de 25 porcento, por conta do INSS");
	}
	else
	{
		printf("Seu salario e: %.2f\n", (salarioimput * 0.3));
		printf("Seu salario teve um desconto de 30 porcento, por conta do INSS");
	}
	
	
	
	
}
