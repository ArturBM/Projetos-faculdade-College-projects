#include<stdio.h>
main()
{
    float salbase;

    printf("Me informe o seu salario: ");
    scanf("%f", &salbase);

float salcompleto = salbase * 1.05 - salbase * 0.07;

printf("Seu salario completo: %.2f", salcompleto);

}
