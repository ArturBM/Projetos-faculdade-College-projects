#include<stdio.h>
float pi(float price);
int main()
{
    float price;
    printf("Qual o seu salario: ");
    scanf("%f", &price);
    float mostrasal;
    mostrasal= pi(price);
    printf("\n novo salario: %.2f", mostrasal);

}
float pi(float price)
{
    float newsal;
    if(price <= 600){
        newsal = price-(price * 0.07);
    }
    else if(price <1000){
        newsal = price-(price * 0.18);
    }
    else{
        newsal = price-(price * 0.26);
    }
    return newsal;
    
}