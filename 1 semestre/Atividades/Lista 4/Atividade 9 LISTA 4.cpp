#include<stdio.h>
#include<math.h>
main()
{
	float num1, num2;
	char opcao;
	char a, b, c;
	printf("Me informe um numero: ");
	scanf("%f", &num1);
	
	
	printf("Me informe outro numero: ");
	scanf("%f", &num2 );
	
	printf("Qual opcao voce deseja a, b ou c ?");
	scanf(" %c", &opcao);
	
	float resultado;
	
	if(opcao == 'a')
	{
		resultado = pow(num1, num2);
		printf("O resultado de %.1f elevado a %.1f e igual a: %.1f\n", num1, num2, resultado);
		
		
	}
	else if(opcao == 'b' )
	{
	    	printf("A raiz quadrada de %.2f: %.2f\n", num1, sqrt(num1));
            printf("A raiz quadrada de %.2f: %.2f\n", num2, sqrt(num2));	
}
	else if(opcao == 'c')
{
	        printf("A raiz cubica de %.2f: %.2f\n", num1, cbrt(num1));
            printf("A raiz cubica de %.2f: %.2f\n", num2, cbrt(num2));
}
	else
	{
		printf("Opcao invalida");
	}
}
