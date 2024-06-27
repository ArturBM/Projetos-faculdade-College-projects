#include<stdio.h>
main()
{
float num1, num2, media, produto, divisao;

    printf("Me informe um numero: ");
    scanf("%f", &num1);

    printf("Me informe outro numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2; 

    printf("A media desses numeros eh: %.1f\n", media); 

    if (num1 > num2)
	 {
        printf("A diferenca dos numeros e de: %.1f\n", num1 - num2);
    } else 
	{
        printf("A diferenca dos numeros e de: %.1f\n", num2 - num1);
    }

    produto = num1 * num2;

    printf("O produto dos numeros e: %.2f\n", produto);

    if (num2 != 0) 
	{
        divisao = num1 / num2;
        printf("A divisao do seu numero e: %.2f\n", divisao);
    } else
	 {
        printf("Impossivel realizar a divisao, o segundo numero eh zero.\n");
    }
	
}
