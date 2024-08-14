#include<stdio.h>
int main()
{
    int  m[2][3], i ,  met[2][3];
printf("Lenda a matriz...");
    for(i = 0;  i  <  2; i++ )
    {
        for(int j = 0; j<3; j++)
        {
            printf("%dx%d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
printf("Dividindo...");
    for(i=0;i<2;i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            met[i][j] =  m[i][j]/2;
        }
    }
printf("imprimindo...");  
   for(i=0;i<2;i++)
    {
        printf("\n");
    for(int j = 0; j<3 ; j++)
        {
            printf("%d\t", met[i][j]);
        }
    }

}