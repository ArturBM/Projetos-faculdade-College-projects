#include<stdio.h>
float func(float sal);
main()
{
    float salario=800, aumento;
    aumento=func(salario);
    printf("O valor do aumento: %f", aumento);

}
float func(float sal)
{
 
    if(sal<=1000)
    {
        return sal * 0.3;
    }
    else{
         return sal*0.1;
    }
}
