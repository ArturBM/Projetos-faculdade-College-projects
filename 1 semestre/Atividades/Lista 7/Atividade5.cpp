#include<stdio.h>
main()
{
    int A[5],T[5], i;

    for(i=0;i<5;i++)
    {
        printf("Me informe um numero: ");
        scanf("%d", &A[i]);
    }

    for(i=0;i<5;i++)
    {
        T[i]= A[i] *3;
        printf("O vetor triplo e: %d\n", T[i]);
    }
}