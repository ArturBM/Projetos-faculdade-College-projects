#include<stdio.h>
int main()
{
    int test;
    char novoteste;
    
    scanf("%d", &test);
    novoteste = (char)test;
    printf("%c",novoteste );

    int test2;
    char novoteste2;

    scanf(" %c", &novoteste2);

    test2= (int)novoteste2;

    printf("%d", test2);




}