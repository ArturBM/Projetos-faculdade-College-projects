#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char nome1[70], nome2[70];
    int i, j = 0,tam, tam2;
    printf("Informe a primeira palavra: ");
    gets(nome1);
   printf("Informe a segunda palavra: ");
   gets(nome2);
   tam=strlen(nome1);
   tam2=strlen(nome2);
   int tamanho = tam + tam2;
   char frase[tamanho];

    int maiorTamanho = tam;
    int menorTamanho = tam2;
    if(tam2 > tam)
    {
        maiorTamanho = tam2;
        menorTamanho = tam;
        
        for(i=0;i<maiorTamanho;i++)
        {
            if(i< menorTamanho-1)
            {
                frase[j] = nome1[i];
                j++;
            }

                frase[j] = nome2[i];
                j++;
            
        }
    }
    else{
   for(i=0;i<maiorTamanho;i++)
   {
            frase[j] = nome1[i];
            j++;

            if(i < menorTamanho)
            {
                frase[j] = nome2[i];
                j++;
            }
        
   }
   }
   frase[tamanho] = '\0';
   printf("%s", frase);
  

} 