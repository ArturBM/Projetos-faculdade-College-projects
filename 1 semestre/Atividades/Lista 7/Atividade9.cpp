#include<stdio.h>
main()
{
    int i, A[5],aux, continua;

    for(i=0;i<5;i++)
    {
        printf("Me informe um numero: ");
        scanf("%d", &A[i]);

    }
continua = 1;
    while(continua != 0)
    {
        continua =0;
        for(i=0; i< 4;i++)
        {
            if(A[i] > A[i + 1])
            {
                aux= A[i];
                A[i] = A[i + 1];

                A[i + 1] = aux;
                continua = 1;
            }
        } 
      }

         for(i=0;i<5;i++)
    {
        printf("%d\t", A[i]);
    }
     printf("\n");
}
       