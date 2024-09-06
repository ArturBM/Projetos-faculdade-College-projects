#include<stdio.h>
void soma(int a, int b);
int main()
{

    int x, y;
    printf("Me informe o a: ");
    scanf("%d" ,&x);
    printf("Me informe o b: ");
    scanf("%d" ,&y);

soma(x,y);
}

void soma(int a, int b)
{
    int i;
    int somar=0;
    if(a<b)
    {
         for(i=a; i <= b; i++)
    {
        

        somar = somar+ i;
    }

    }
    else{
        for(i=b; i <= a; i++)
    {
        

        somar = somar+ i;
    }
    }
    
    printf("%d", somar);
}