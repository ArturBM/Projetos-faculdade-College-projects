#include<stdio.h>
void Calcmedia(float n[3]);
int main()
{
    int i;
    float n[3];
    for(i=0;i<3;i++)
    {
     printf("Me informe a nota %d: ",i+1);
     scanf("%f", &n[i]);
    }
    Calcmedia(n);
}
void Calcmedia(float n[3])
{
    int i;
    float media,soma=0;
    for(i=0;i<3;i++)
    {
        soma = soma +n[i];
    }
    media = soma/3;
    printf("Sua media: %.2f", media);
}