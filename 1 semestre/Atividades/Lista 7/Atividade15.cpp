#include<stdio.h>
int main()
{
        int i, A[7];
        for(i=0;i<7;i++)
        {
            printf("Me informe um numero: ");
            scanf("%d", &A[i]);
        }

     for(i=0;i<7;i++)
     {
            if(A[i]%2 == 0 )
            {
                printf("\nOs numeros multiplos de dois sao: %d\n",A[i]);
            }
            if(A[i]%3 == 0 )
            {
                 printf("\nOs numeros multiplos de tres sao: %d\n",A[i]);
            }
                 if(A[i]%2 == 0 && A[i]%3 == 0 )
            {
                 printf("\nOs numeros multiplos de ambos sao: %d\n",A[i]);
            }       

     }
    }

