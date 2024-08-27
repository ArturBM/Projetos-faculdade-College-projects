#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int tam,i,cont;
    char nome[50];

    printf("Me informe sua frase favoria: ");
    gets(nome);

    tam= strlen(nome);

    for(i=0;i<tam;i++)
    {
        cont++;
    }

    printf("A frase tem %d caracteres", cont);

}