#include<stdio.h>
int main()
{
    int i,num[100],cont=0;

    for(i=0;i<100;i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num[i]);
        if(num[i] < 0)
        {
            break;
        }
        cont++;
    }

        for(i=cont-1;i>=0;i--)
        {
            printf("%d ", num[i]);
        }


}