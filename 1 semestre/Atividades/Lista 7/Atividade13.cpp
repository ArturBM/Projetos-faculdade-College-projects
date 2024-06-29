#include<stdio.h>
int main()
{

    int   A[20], novosalario[20];
    char B[20][40];
int i;
    for( i=0; i<20;i++)
    {
            printf("Me informe seu nome: ");
            scanf("%s", &B[i]);

            printf("Me informe seu salario: ");
            scanf("%d", &A[i]);
            novosalario[i] = A[i] * 1.08;
    }

    for(i=0;i<20;i++)
    {
        printf("%d. Nome: %s\t Salario: %d", i+1, B[i], novosalario[i]);
    }
}