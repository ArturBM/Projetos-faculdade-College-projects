#include<stdio.h>
main()
{
        int A[5], B[5], i,soma[5];

        for(i=0;i<5;i++)
        {
            printf("Informe um numero: ");
            scanf("%d", &A[i]);
        }
        for(i=0;i<5;i++)
        {
            printf("Informe um numero: ");
            scanf("%d", &B[i]);
        }
        for(i=0;i<5;i++)
        {
        soma[i]= A[i] + B[i];
        }
        for(i=0;i<5;i++)
        {
            printf("O vetor soma e: %d\n", soma[i]);
        }

}