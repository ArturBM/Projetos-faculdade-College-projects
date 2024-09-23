#include<stdio.h>
void imp(int vetor[6]);
float par(int vetor[6]);
float par2(int vetor[6]);
int main()
{
    int vetor[6]; 

    for(int i=0; i<6; i++)
    {
        printf("\n numero %d:",i+1);
        scanf("%d", &vetor[i]);
    }

    imp(vetor);

    float mostra, mostra2;
    mostra=par(vetor);
    printf("A quantidade dos pares: %.2f\n", mostra);

    mostra2=par2(vetor);
    printf("A media dos pares: %.2f\n", mostra2);
}

void imp(int vetor[6])
{
    float soma = 0;
    for(int i=0;i<6;i++)
    {
        if(vetor[i]%2!=0)
        {
            printf("Numeros impares: %d\n", vetor[i]);
            soma = soma + vetor[i];
            
        }
    }
printf("A soma dos numeros impares: %.2f\n", soma);
}
float par(int vetor[6])
{
    int cont=0;
    float soma=0,media=0;

 for(int i=0;i<6;i++)
    {
        if(vetor[i]%2==0)
        {
            cont++;
            soma = soma + vetor[i];
        }
    }
    media = soma/(float)cont;
    return cont;
    
}
float par2(int vetor[6])
{
    int cont=0;
    float soma=0,media=0;

 for(int i=0;i<6;i++)
    {
        if(vetor[i]%2==0)
        {
            cont++;
            soma = soma + vetor[i];
        }
    }
    media = soma/(float)cont;
    return media;
    
}

