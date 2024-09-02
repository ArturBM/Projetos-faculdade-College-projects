#include<stdio.h>
void somar(int A, int B);
main()
{
    int x,y,r;
    printf("Infome o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y:  ");
    scanf("%d", &y);
    somar(x,y);    

}

void somar(int A, int B)
{
    int s;
    s = A + B;
    printf("A soma e: %d",s);
}