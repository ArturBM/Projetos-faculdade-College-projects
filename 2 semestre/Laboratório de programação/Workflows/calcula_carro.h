#include<stdio.h>
float carro_novo(float precof, float txlucro, float tximp);
float carro_novo(float precof, float txlucro, float tximp)
{
    float lucro, imposto, preco_final;
    lucro = precof*txlucro/100;
    imposto=precof*tximp/100;
    preco_final=precof+lucro+imposto;
    printf("Valor do lucro: %.2f\n", lucro);
    printf("Valor do imposto %.2f\n", imposto);
    return preco_final;
}
    