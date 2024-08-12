#include<stdio.h>
int main()
{
    int mat[3][3],temp[3];

printf("Lendo a matriz...");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%dx%d: ", 1+i, 1+j);
        scanf("%d", &mat[i][j]);
        }
    }

printf("Invertendo a linha 1 com a linha 3...");

    for(int j=0;j<3;j++){

        temp[j] = mat[0][j];
        mat[0][j] = mat[2][j];
        mat[2][j] = temp[j];
    }

printf("Invertendo a diagonal principal com a secundaria...");

    for(int i = 0; i <3; i++ )
    {
        
            int temp = mat[i][i];
            mat[i][i] = mat[i][2 - i];
            mat[i][2 - i] = temp;
        
    }
printf("Imprimindo a matriz...");
    for(int i = 0; i < 3 ; i++)
    {printf("\n");
        for(int j = 0; j < 3 ; j++)
        {
            printf("%d\t", mat[i][j]);
        }
    }

}


