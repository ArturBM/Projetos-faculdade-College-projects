#include<stdio.h>
main()
{
	float n1, comissao, final, vendas;
	printf("Informe seu salario fixo: ");
	scanf("%f", &n1);
	printf("Quantidade de vendas: ");
	scanf("%f", &vendas);
	comissao = (vendas * 0.04);
	final = (comissao + n1);
	printf("Seu salario com comissao e: %.2f\n", final);
	printf("Sua comissao foi de: %.2f", comissao);
	
	
}
