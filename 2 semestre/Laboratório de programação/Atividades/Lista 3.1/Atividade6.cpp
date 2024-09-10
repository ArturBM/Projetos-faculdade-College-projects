#include<stdio.h>
float carro_novo(float precof, float txlucro, float tximp);
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
    