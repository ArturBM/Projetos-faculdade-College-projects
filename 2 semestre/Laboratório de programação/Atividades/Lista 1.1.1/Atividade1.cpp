#include<stdio.h>
int main()
{

     int M[2][3], P[2][3], soma[2][3];
     int i, j;
for(i=0; i<2 ; i++ )
{

    for( j=0;j<3;j++)
    {
    printf("Me informe o valor %d %d: ", i+1,j+1);
    scanf("%d", &M[i][j]);

    printf("Me informe o Valor de %d %d: ", i+1,j+1);
    scanf("%d", &P[i][j]);
 

    soma[i][j]= M[i][j] + P[i][j];

    }

}
printf("A soma da matriz e\n");
for(i=0;i<2;i++)
{
    printf("\n");
    for(j=0;j<3;j++)
    {
        printf("%d\t", soma[i][j]);
    }
}

}

