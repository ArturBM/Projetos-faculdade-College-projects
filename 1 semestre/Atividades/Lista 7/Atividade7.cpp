#include<stdio.h>
main()
{
        int A[5], posneg=-1, i,indice;

        for(i=0;i<5;i++)
        {
            printf("Me informe um numero: ");
            scanf("%d", &A[i]);
        }
        for(i=0;i<5;i++)
        {
              if(A[i] < 0)
            {
                posneg = i;
                break;
            }

        }
            if(posneg >= 0)
            {
                printf("O indice do seu numero negativo e: %d", posneg);
                
            }
            else
            {
                printf("Negativo nao encontrado");
            }


}