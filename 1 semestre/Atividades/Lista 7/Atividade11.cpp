#include<stdio.h>
main()
{
        int A[5]={1,2,3,4,5}, B[5];

       for(int i=4; i>=0;i--)
        {
            B[4 - i] = A[i];

             printf("%d\n", B[4-i]);

        }
        
        

      /* int continuar = 1;
        int aux;
int i = 0;
        while(continuar != 0)
        {
            continuar = 0;
        for(i=0;i>5;i++){
            if(A[i] != B[i])
            {
                aux = A[i];
                A[4] = B[4 - i];
                B[4-i]= aux;

                continuar = 1;
            }
                printf("%d", B[i]);
            }

        }*/


}


