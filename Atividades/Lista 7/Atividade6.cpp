#include<stdio.h>
main()
{   
    int i, X[10], maior = -9999, menor = 9999;
    int posmaior, posmenor;
    for(i=0;i<10;i++)
    {
        printf("Me informe um numero: ");
        scanf("%d", &X[i]);

        if(X[i] > maior)
        {
            maior = X[i];
            posmaior = i;
        }
        if(X[i] < menor )
        {
            menor = X[i];
            posmenor = i;
        }
    
    }

    
        printf("O maior e %d e sua posicao e %d\n", maior, posmaior );
        printf("O menor e %d e sua posicao e %d\n", menor, posmenor );
        printf("A diferenca entre eles e: %d\n", maior-menor);

}