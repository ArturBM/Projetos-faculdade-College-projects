#include<stdio.h>
void calc(float notas[3],float *media, float *maior, float *menor);
int main()
{
    int i;
    float notas[3], maior, menor, media;
    for(i=0;i<3;i++)
    {
        printf("Me informe o numero %d: ",i+1);
        scanf("%f", &notas[i]);
        if (notas[i] > 10 || notas[i] < 0)
        {
            i--;
        }
    }
    calc(notas,&media,&maior,&menor);
    printf("Media: %.2f\t Maior: %.2f\t Menor:%.2f\t", media,maior,menor);

}
void calc(float notas[3],float *media, float *maior, float *menor)
{
    int i;
    float soma = 0;
    *maior = -999;
    *menor = 999;
    for(i=0;i<3;i++){

        if(notas[i] > *maior)
        {
            *maior = notas[i];
        }
        else if(notas[i] < *menor)
        {
            *menor = notas[i];
        }
       soma = soma + notas[i];
    }
    *media = soma/3;
}
