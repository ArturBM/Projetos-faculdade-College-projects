#include<stdio.h>
void newsal(float *sal);
int main()
{
    float salario;
    printf("Me informe seu salario: ");
    scanf("%f", &salario);

    newsal(&salario);
    printf("%.2f\n", salario);
}
void newsal(float *sal)
{
    if(*sal <= 500)
    {
        *sal = *sal * 1.05;
    }
    else if(*sal < 1200)
    {
        *sal = *sal * 1.12;
    }
    else{
        *sal = *sal;
    }

}