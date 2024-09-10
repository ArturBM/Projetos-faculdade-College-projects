#include<stdio.h>
float valorhora(float salbase);
float salbruto(float valhoras, float horas);
float imposto(float valbruto);
float salliq(float valbruto, float valimposto);

int main()
{
    float salbase, valhoras, horas, valbruto, valimposto,valliq;
    printf("Me informe o salario base da empresa: ");
    scanf("%f", &salbase);
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);
    valhoras=valorhora(salbase);
    valbruto=salbruto(valhoras,horas);
    valimposto=imposto(valbruto);
    valliq = salliq(valbruto, valimposto);
    printf("O valor do salario liquido: %.2f", valliq);
}
float valorhora(float salbase)
{   
    float vhoras;
    vhoras=salbase*0.13;
    return vhoras;
}
float salbruto(float valhoras, float horas)
{
    float vbruto;
    vbruto= horas * valhoras;
    return vbruto;
}
float imposto(float valbruto)
{
    float vimposto;
    vimposto = valbruto - (valbruto * 0.755);
    return vimposto;
}
float salliq(float valbruto, float valimposto)
{
    float vliq;
    vliq = valbruto - valimposto;
    return vliq;

}