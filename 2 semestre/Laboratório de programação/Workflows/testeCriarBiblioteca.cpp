#include<stdio.h>
#include "calcula_carro.h"
int main()
{
    float pfabrica, txl, txi, pfinal;
    printf("Informe o preco de fabrica: ");
    scanf("%f", &pfabrica);
    printf("Informe o taxa de lucro: ");
    scanf("%f", &txl);
    printf("Informe o taxa de imposto: ");
    scanf("%f", &txi);
    pfinal=carro_novo(pfabrica,txl,txi);
    printf("O valor do veiculo sera: %.2f\n", pfinal);

}