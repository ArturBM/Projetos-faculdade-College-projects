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
    nome[0]=toupper(nome[0]);
    for(i=0;i<tam;i++)
    {
        if(nome[i]==' ')
        {
            nome[i+1]=toupper(nome[i+1]);
        }
    }
printf("Nome do aluno: %s", nome);

} 