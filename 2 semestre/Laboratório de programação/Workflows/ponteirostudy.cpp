#include<stdio.h>
int main()
{
int n1, *p1;
n1 = 8;
p1 = &n1;
*p1 = *p1 + 7;
printf("%d", n1);

}
