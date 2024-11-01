#include<stdio.h>
float calc(float sal[5], float filho[5], float *mfilho,float *maior, float *perc);
int main()
{

    int i;
    float salario[5],filhos[5], mediaf,medias,perc5,maximo=-9999;
    for(i=0;i<5;i++)
    {
        printf("Informe o seu salario: ");scanf("%f", &salario[i]);
        printf("Informe o numero de filhos: ");scanf("%f", &filhos[i]);

    }
    medias=calc(salario,filhos,&mediaf,&maximo,&perc5);
    printf("Media Salario: %.2f\n", medias);
    printf("Media filhos: %.2f\n", mediaf);
    printf("Maior salario: %.2f\n",maximo);
    printf("Percentual de pessoas com salario abaixo de 5000: %.2f\n", perc5);


}

float calc(float sal[5], float filho[5], float *mfilho,float *maior, float *perc)
{
 int i;
 float cont5000=0,somas=0, somaf=0;
 for(i=0;i<5;i++)
 {
    somas=somas+sal[i];
    somaf=somaf+filho[i];
    if(sal[i] > *maior)
    {
        *maior = sal[i];
    }
    if(sal[i] < 5000)
    {
        cont5000++;
    }
 }
 *mfilho = somaf/5;
 *perc = (cont5000/5.0) * 100;
 return somas/5;

}