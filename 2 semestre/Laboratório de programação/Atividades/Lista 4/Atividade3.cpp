#include<stdio.h>
void calcularAumento(float *salario, float *aumento);
int main(){
    float sal=800,bonus;
    calcularAumento(&sal, &bonus);
    printf("%f\n", bonus);
    printf("%f\n", sal);
}
void calcularAumento(float *salario, float *aumento)
{
    if(*salario <500)
    {
        *aumento = *salario *0.3;
    }
    else{
        *aumento = 0;
    }
    *salario = *salario + *aumento;
}