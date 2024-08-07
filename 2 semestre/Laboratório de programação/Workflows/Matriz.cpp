#include<stdio.h>
main()
{

    float peso[3][4];
    char nome[3][4][30];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nDelegacao %d\n", i+1);
        for(j=0;j<4;j++)
        {
            printf("Peso do atleta %d:", j+1);
            scanf("%d", &peso[i][j]);
            printf("Nome do atleta %d:", j+1);
            fflush(stdin);
            gets(nome[i][j]);

        }
    }

        for(i = 0; i < 3; i++)
    {
        printf("\nRelatorio dos atletas %d\n", i + 1);
        for(j = 0; j < 4; j++)
        {
            printf("Atleta %d - Peso: %.2f, Nome: %s\n", j + 1, peso[i][j], nome[i][j]);
        }
    }


}