#include<stdio.h>
int main()
{
    int i, P[6], A[6], I[6], p=0, im=0,par=0,impar=0;

    for(i=0;i<6;i++)
    {
        printf("Me informe um numero: ");
        scanf("%d", &A[i]);

        if(A[i]%2 == 0 )
        {
            P[p] = A[i];
            par++;
            p++;
            
         
        }
        if(A[i]%2 != 0)
        {
            I[im] = A[i];
            impar++;
            im++;
            
       
        }

    }

    for(i=0;i<p;i++)
    {
        printf("Os numeros pares sao: %d\n", P[i]);
    }
     printf("Quantidade de pares sao %d\t\n", par);
    for(i=0;i<im;i++)
    {
           printf("Os numeros impares sao: %d\n", I[i]);  
    }
         printf("Quantidade de impares sao %d\t\n", impar);

}