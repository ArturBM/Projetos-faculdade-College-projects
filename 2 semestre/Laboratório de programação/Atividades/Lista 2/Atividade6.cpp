#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nome1[70], nome2[70];
    int i, j = 0,tam;
    printf("Informe a primeira palavra: ");
    gets(nome1);
   printf("Informe a segunda palavra: ");
   gets(nome2);
   tam=strlen(nome1);
   int tamanho = tam * 2;
   char frase[tamanho];

   for(i=0;i<tam;i++)
   {
        frase[j] = nome1[i];
        j++;
        frase[j] = nome2[i];
        j++;
   }
   frase[tamanho] = '\0';
   printf("%s", frase);
  

} 