#include<stdio.h>
int main()
{
    int A[4][5],somalinha[4]={0},somacoluna[5]={0};

printf("Lendo a matriz...\n");
    for(int i = 0; i<4 ; i++)
    {
        for(int j = 0; j <5; j++)
        {
            printf("%dx%d: ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i<4; i++)
    {
       for(int j=0;j<5;j++)
       {
        somalinha[i] += A[i][j];
       }
    }


    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<5;j++)
        {
            somacoluna[i] += A[i][j];
        }
    }

printf("Imprimindo a soma da linha...\n");
        for(int i = 0; i<4 ; i++)
    {
       printf("Linha%d: %d\n",i+1,somalinha[i]);
    }
printf("Imprimindo a soma da coluna...\n");
        for(int j = 0; j<4 ; j++)
    {
       printf("Coluna%d: %d\n",j+1,somacoluna[j]);
    }

}


