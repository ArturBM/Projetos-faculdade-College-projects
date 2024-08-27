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
    primeiro = nome[0]; 
    
    for(i = 0; i < tam; i++) 
    {
        nome[i] = nome[i+1];
    }
 nome[tam-1] = primeiro ;

    printf("O novo nome com a primeira letra em ultimo e: %s", nome);

}