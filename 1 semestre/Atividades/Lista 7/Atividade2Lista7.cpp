#include<stdio.h>
main()
{
        int A[5], i;

        for(i=0;i<5;i++)  //preencher o vetor A
        {
            printf("Me informe um numero: ");
            scanf("%d", &A[i]);

        }

        for(i=0;i<5;i++)  //Imprimir de ordem normal
        {
                printf("%d\t", A[i]);

        }
printf("\n");
        for(i=4; i>=0; i--)  // Imprimir de forma inversa
        {
               
                printf("%d\t", A[i]);

        }


}