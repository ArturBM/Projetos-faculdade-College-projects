#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nome[30], primeiro;
    int i,tam;
    printf("Informe seu nome: ");
    gets(nome);
    tam=strlen(nome);
int cont;
    for(i=0;i<tam;i++)
    {
        if(nome[i]=='a')
        {
            nome[i]='*';
            cont++;
        }
        else
        {
                nome[i]= toupper(nome[i]);
        }
    }

    printf("O novo nome: %s", nome);
    printf("%d letras foram trocadas", cont);


}