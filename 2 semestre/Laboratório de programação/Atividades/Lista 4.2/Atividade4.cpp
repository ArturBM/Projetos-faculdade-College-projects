#include<stdio.h>
void func(float *salario);
int main()
{

}
void func(float *salario)
{
    float boni;
    if(*salario <= 724)
    {
        boni = *salario * 0.11;
    }
     else if(*salario < 1500)
    {
        boni = *salario * 0.09;
    }
    else{
        boni = *salario * 0.05;
    }
    float newsal;
    newsal = *salario + boni;
}

