#include <stdio.h>

void calcularAumento (float *salario, float *aumento);

int main(){

    float sal, aumento=0;

    printf("salario:");
    scanf("%f",&sal);

    calcularAumento(&sal,&aumento);

    printf("aumento :%f\n", aumento);
    printf("novo salario :%f\n", sal);

}

void calcularAumento (float *salario, float *aumento){

    if (*salario>=500)
    {
        *aumento=*salario*0.3;
        *salario= *salario+*aumento;
    }else{
        *aumento=0;
    }
    
}
