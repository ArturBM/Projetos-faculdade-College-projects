#include<stdio.h>
int main()
{
    int i,  A[5],cont=0, maior=-9999, menor= 9999; float soma = 0, media;
printf("Lendo...");
    for(i=0;i<5;i++)
    {
        printf("Valor%d: ", i+1);
        scanf("%d", &A[i]);
    }

printf("Extraindo Dados...\n");
    for(i=0;i<5;i++)
    {
        cont++;
        if(A[i] > maior)
        {
            maior = A[i];
        }
        if(A[i] < menor)
        {
            menor = A[i];
        }
soma = soma + A[i];
    }

    if(cont > 0)
    {
        media = soma/(float)cont; 
    }
printf("Valores...\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t", A[i]);
    }

    printf("O maior valor: %d\n", maior);
    printf("O menor valor: %d\n", menor);
    printf("A media: %.2f\n", media);





}