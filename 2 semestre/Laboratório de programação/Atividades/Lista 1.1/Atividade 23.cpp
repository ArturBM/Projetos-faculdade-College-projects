#include<stdio.h>
int main()
{
    int  i, j, m, cont=0;
    
    float soma = 0, media = 0;
    printf("Me informe o tamanho da matriz: ");
    scanf("%d", &m);

    printf("\nLendo a matriz\n");
    int mat[m][m];
    for(i=0;i<m;i++)
    {
        for(j=0; j<m; j++){

        
        printf("Me informe os elementos da matriz: ");
        scanf("%d", &mat[i][j]);
    }
    }

    printf("\n Calculando... \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
            soma = soma + mat[i][j];
            cont++;
            }
        }
    }
    if(cont != 0 )
    {
        media = (float)soma/(float)cont;
    }  
    printf("\nMostrando a matriz...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("A media dos elementos da matriz: %f", media);



}