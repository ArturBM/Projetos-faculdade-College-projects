#include<stdio.h>
void cubo(double numero, double *result);
int main()
{
    double num, resultado; // double >= float 

    printf("Numero: ");
    scanf("%lf", &num);

    cubo(num, &resultado);
    printf("%lf", resultado);


    
}
void cubo(double numero, double *result)
{
    *result = numero * numero * numero;

}
