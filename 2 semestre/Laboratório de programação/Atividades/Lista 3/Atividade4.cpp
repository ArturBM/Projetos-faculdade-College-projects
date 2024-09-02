#include<stdio.h>
int somaEdividir(int a, int b, int c);
int main()
{

    int x, y,z,r;
    printf("Me informe o a: ");
    scanf("%d" ,&x);
    printf("Me informe o b: ");
    scanf("%d" ,&y);
    printf("Me informe o z: ");
    scanf("%d" ,&z);
    r = somaEdividir(x,y,z);
    printf("%d",r);
}
int somaEdividir(int a, int b, int c)
{
      int i;
    int somar=0;
    for(i= b; i <= c; i++)
    {
        if(i%a==0)
        {
            somar = somar + i;
        }
    }
   return somar;
}