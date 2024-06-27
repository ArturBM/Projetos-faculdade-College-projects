#include<stdio.h>
main()
{
        int A[5], B[5], i, C[10];

        for(i=0;i<5;i++)
        {
            printf("Me informe um numero: ");
            scanf("%d", &A[i]);
        }
        for(i=0;i<5;i++)
        {
            printf("Me informe um numero: ");
            scanf("%d", &B[i]);
        }

        for(i=0;i<5;i++)
        {
            C[i]= A[i];

        }
        for(i=0;i<5;i++)
        {
            C[i+5]= B[i];

        }

        for(i=0;i<10;i++)
        {
            printf("%d\t", C[i]);
        }

}