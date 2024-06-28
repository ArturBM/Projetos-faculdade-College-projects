#include<stdio.h>
main()
{
    int pos;
  int A[5], numimput, i;

        A[0]= 10;
        A[1]= 20;
        A[2]= 30;
        A[3]= 40;
        A[4]= 50;

        printf("Me informe um numero: ");
        scanf("%d", &numimput);
        
        for(i=0;i<5;i++)
        {
            if(numimput == A[i])
            {
                pos = i + 1;
                printf("Elemento encontrato\n");
                break;
            }
            else
            {
                 printf("Elemento nao encontrado\n");
            }
               
        }
            printf("A posicao do seu numero e: %d", pos);
}