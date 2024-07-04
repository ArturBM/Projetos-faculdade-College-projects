#include <stdio.h>

int main() {
    int Q[10] = {54, 0, 856, 0, 87, 56, 124, 1, 99, 50}, CP[10], CL[10], CPE[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, QC[10], aux[10];
    int produtoexistente;

    for (int i = 0; i < 10; i++) {
        printf("Informe seu codigo de consumidor: ");
        scanf("%d", &CL[i]);
        if (CL[i] == 0)
            break;

        printf("Me informe o codigo do seu produto: ");
        scanf("%d", &CP[i]);
        printf("Quantos voce deseja comprar: ");
        scanf("%d", &QC[i]);

        produtoexistente = 0;

        for (int j = 0; j < 10; j++) {
            if (CPE[j] == CP[i]) {
                printf("O seu produto %d tem um estoque de %d\n", CP[i], Q[j]);
                produtoexistente = 1;
                
                if (Q[j] >= QC[i]) {
                    printf("Pedido atendido. Obrigado e volte sempre.\n");
                    aux[j] = Q[i] - QC[i];
                    Q[j] = aux[j];
    
                } else {
                    printf("Nao temos estoque suficiente dessa mercadoria.\n");
                }
                break;
            }
        }

        if (!produtoexistente) {
            printf("Codigo inexistente.\n");
        }
    }

    printf("Codigos de produtos e seus estoques atualizados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", CPE[i], Q[i]);
    }

    
}
