#include<stdio.h>
void calc(int *num, int *cont);
int main()
{
    int i;
    int notas[5], quant=0;
    for(i=0;i<5;i++)
    {
        printf("Me informe o numero %d: ",i+1);
        scanf("%d", &notas[i]);
        if (notas[i] > 10 || notas[i] < 0)
        {
            i--;
        }
    }
   calc(notas,&quant);
    printf("quantidade de pares %d", quant);


}
void calc(int *num, int*cont)
{
    int i;
    for(i=0;i<5;i++){

       if(*num%2==0)
    {
        *cont=*cont+1;
    }
    num++;
    }

}
