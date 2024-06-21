#include<stdio.h>
main()
{

    int A[5],i, maior=-9999,menor=9999;
    float media, soma=0;
        for(i=0;i<5;i++)
        {
            printf("Me informe um numero: ");
            scanf("%d", &A[i]);
            soma=soma + A[i];
            
            if(A[i] > maior)
            {
                    maior = A[i];
            }
            if(A[i] < menor)
            {
                    menor = A[i];
            }
        }
media = soma /5 ;
    for(i=0;i<5;i++)
    {
        printf("Seu %d numero e: %d\n", i+1, A[i]);
    }
        printf("O maior e %d\n", maior);
        printf("O menor e %d\n", menor);
        printf("A media e: %.2f\n", media);
}