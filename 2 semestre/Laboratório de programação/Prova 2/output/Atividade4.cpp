#include <stdio.h>

float novosal(float *salario);

int main(){

float novosalario, boni;

printf("Informe seu salario: ");
scanf("%f", &novosalario);

boni = novosal(&novosalario);

printf("Seu novo salario e: %f\n", novosalario);
printf("Sua bonificacao foi %f\n", boni);

}
float novosal(float *salario)
{

float bonificacao;

if(*salario <=500)
{

bonificacao = *salario * 0.05;
*salario = *salario * bonificacao;

}
if(*salario <= 1200)
{

bonificacao = *salario * 0.12;
*salario = *salario * bonificacao;

}
else
{

bonificacao = *salario * 0;

}

return bonificacao;
}