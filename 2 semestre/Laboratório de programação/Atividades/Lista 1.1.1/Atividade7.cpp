#include<stdio.h>
int main(){
    int i, A[5], posneg=-1;

for(i=0;i<5;i++)
    {

        printf("%d: ",i+1);
        scanf("%d", &A[i]);
    }


    for(i=0;i<5;i++)
    {
        if(A[i] < 0)
        {
            posneg=i;
            break;
        }
    }

    if(posneg >=0)
    {
        printf("Negativo na posicao: %d", posneg);
    }
    else{
        printf("Negativo nao encontrado");
    }
    

}

