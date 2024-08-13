#include<stdio.h>
int main()
{
    int i,  A[5],T[5];
printf("Lendo...");
    for(i=0;i<5;i++)
    {
        printf("Valor%d: ", i+1);
        scanf("%d", &A[i]);
    }

printf("Triplicando...\n");
    for(i=0;i<5;i++)
    {
      T[i] = A[i] *3;
    }

printf("Valores...\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t", T[i]);
    }

    




}