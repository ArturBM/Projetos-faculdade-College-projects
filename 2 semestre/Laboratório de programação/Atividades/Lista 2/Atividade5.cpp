#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nome[70];
    int i,tam;
    printf("Informe seu nome: ");
    gets(nome);
    tam=strlen(nome);
    nome[0]=toupper(nome[0]);
    int cont=0;
    for(i=0;i<tam;i++)
    {
        if(nome[i]==' ')
        {
           cont++;
        }
    }
printf("A frase tem %d palavras", cont+1);

} 