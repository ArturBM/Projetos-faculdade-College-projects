#include<stdio.h>
#include<string.h>

typedef struct {
    char nome[30], editora[30];
    int pg;
}revista;

void ler(revista r[3]);
void mostrar(revista r[3]);

int main(){
    revista r[3];
    ler(r);
    printf("\n-------------------------------\n");
    mostrar(r);
}

void ler(revista r[3]){
    int i;
    for(i=0;i<3;i++)
    {
        printf("Nome da revista: ");
        fflush(stdin);
        gets(r[i].nome);
        printf("Nome da editora: ");
        gets(r[i].editora);
        printf("Numero de paginas: ");
        scanf("%d", &r[i].pg);
    }
}

void mostrar(revista r[3]){
    int i,maior = -9999,menor = 9999, pme=-1;
    char maiorpg[30];
    for(i=0;i<3;i++)
    {
        printf("Nome da revista: %s\n", r[i].nome);
        printf("Nome da editora: %s\n", r[i].editora);
        printf("Numero de paginas: %d\n", r[i].pg);
        if(r[i].pg > maior)
        {
            maior = r[i].pg;
            strcpy(maiorpg,r[i].nome);
        }
        if(r[i].pg< menor)
        {
            menor = r[i].pg;
            pme= i;
        }

        printf("O maior: %d\n", maior);
        printf("O menor: %d\n", menor);
        
    }
}