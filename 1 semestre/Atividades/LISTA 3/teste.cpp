#include<stdio.h>
main()
{

    int i, conta, cont=0, neg=0, pos=0;
    float saldo, perc;

    printf("Qual o numero da sua conta:");
    scanf("%d", &conta);

    while(conta != -999)
    {
            cont++;
            printf("Qual o seu saldo: ");
            scanf("%f", &saldo);

            printf("O numero da sua conta e: %d\n", conta);
            printf("O seu saldo e: %.2f\n", saldo);
            if(saldo > 0 )
            {
                pos++;
                printf("Positivo\n");
            }
            else
            {
                neg++;
                printf("Negativo\n");
            }
    printf("Qual o numero da sua conta:");
    scanf("%d", &conta);
    }
            perc= (pos/cont)*100;
        printf("A quantidade de clientes com saldo negativo: %d\n", neg);
        printf("A quantidade de clientes: %d\n", cont);
        printf("A porcentagem de clientes com saldo positivo e: %.2f\n ", perc);

}

