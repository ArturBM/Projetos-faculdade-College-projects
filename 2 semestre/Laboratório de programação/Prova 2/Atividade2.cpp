#include<stdio.h>
float novosal(float *sal);
int main()
{
    float bonus, novosalario;

    printf("salario: ");
    scanf("%f", &novosalario);

    bonus = novosal(&novosalario);

    printf("novo salario: %.2f\n", novosalario);
    printf("Bonus: %.2f\n", bonus);


}
float novosal(float *sal)
{
    float boni;

    if(*sal >= 1200)
    {
        boni= 110;
        *sal = *sal + boni;
    }
    else{
        boni = 190;
        *sal = *sal + boni;
    }

    return boni;
}