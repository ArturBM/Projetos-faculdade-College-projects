#include<stdio.h>

typedef struct 
{
    char nome[30], email[30];
    float notas[3];
    int ano;
}aluno;

void ler(aluno al[2]);
void mostrar(aluno al[2]); 

int main(){
    aluno al[2];
    ler(al);
    mostrar(al);
}

void ler(aluno al[2])
{
    int i,j;
    for(i=0;i<2;i++){
        printf("Informe o nome: ");
        fflush(stdin);
        gets(al[i].nome);
        printf("Informe o email: ");
        gets(al[i].email);
        printf("Informe o nascimento: ");
        scanf("%d", &al[i].ano);
        for(j=0;j<3;j++)
        {
            printf("Informe a nota: ");
            scanf("%f", &al[i].notas[j]);

        }
    }
}

void mostrar(aluno al[2])
{
    int i,j;
    float soma=0, media;
    for(i=0;i<2;i++){
        printf("nome: %s\n", al[i].nome); 
        printf("email: %s\n", al[i].email);
        printf("email: %d\n", al[i].ano);
        for(j=0;j<3;j++)
        {
            soma =soma +  al[i].notas[j];
        }

        media = soma/3;
        printf("media: %.2f\n", media);
        soma=0;

    }
}