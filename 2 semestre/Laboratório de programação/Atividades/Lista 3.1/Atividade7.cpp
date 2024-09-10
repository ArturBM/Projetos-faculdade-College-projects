#include<stdio.h>
void aum(float sal);
void mensagem();
int main()
{
    float sal;
    printf("Me informe o seu salario: ");
    scanf("%f", &sal);
    aum(sal);
    


}
void aum(float sal)
{
    float aumento;
    if(sal<5000)
    {
        aumento = sal + sal*0.3;
        printf("Salario com aumento: %.2f", aumento);
    }
    else{
        mensagem();
    }
}
void mensagem(){
    printf("Sem direito a aumento");
}