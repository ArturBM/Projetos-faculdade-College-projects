#include<stdio.h>
typedef struct{
    char nome[30];
    int idade, cod;
}aluno;

main()
{
    int i, idade;
    aluno a[3];

    for(i=0;i<3;i++)
    {
        printf("Informe seu nome: ");
        fflush(stdin);
        gets(a[i].nome);
        printf("Informe sua idade: ");
        scanf("%d", &a[i].idade);
        printf("Informe seu codigo: ");
        scanf("%d", &a[i].cod);
    }
    printf("Informe uma idade para consulta: ");
    scanf("%d", &idade);
    
     for(i=0;i<3;i++)
    {
        if(idade > a[i].idade)
        {
        printf("Nome: %s\n ", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Codigo: %d\n", a[i].cod);
        }
    }
}