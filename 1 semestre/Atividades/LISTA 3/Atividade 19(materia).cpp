#include<stdio.h>

int main()
{
    char nome[30], descricao[60];
    int vezestotal, vezesfoi, aprov;
    float freq;

    printf("Qual o Nome da materia: ");
    scanf("%s", nome);

    printf("Me descreva como e a materia: ");
    scanf("%s", descricao);

    printf("Quantas vezes voce foi para a aula: ");
    scanf("%i", &vezesfoi);

    printf("Quantas aulas tinham a materia: ");
    scanf("%i", &vezestotal);

    freq = (float) vezesfoi / vezestotal * 100; 

    printf("Qual a media para ser aprovado nessa materia: ");
    scanf("%i", &aprov);

    printf("Voce teve %.1f de presenca nessa materia\n", freq); 
    printf("A media minima desse curso e: %i\n", aprov);

}

