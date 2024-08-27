#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nome[30];
    int i,tam;
    printf("Informe seu nome: ");
    gets(nome);
    tam=strlen(nome);
int cont;
    for(i=0;i<tam;i++)
    {
        if(nome[i]=='a')
        {
            nome[i]='b';
            cont++;
        }
    }

    printf("O novo nome: %s", nome);
    printf("\n%d letras foram trocadas", cont);


}