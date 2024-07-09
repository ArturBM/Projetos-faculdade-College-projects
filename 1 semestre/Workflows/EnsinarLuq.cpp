#include<stdio.h>
main()
{
   /* int maior=-9999,menor=9999, numimput;

    printf("Me informe um numero: ");
    scanf("%d", &numimput);

        if(numimput > maior){
            maior = numimput;
        }      */     // maior e menor sem ser vetor 


        int maior=-9999, menor=9999, numimput[5];

        for(int i=0; i<5; i++)
        {
        printf("Me informe um numero: ");
         scanf("%d", &numimput[i]);
        } //receber os numeros do vetor

        for(int i=0; i<5;i++)
        {
            if(numimput[i]> maior)
            {
                maior= numimput[i];
            }
            if(numimput[i] < menor)
            {
                menor=numimput[i];
            } 
        }       //verificar maior e menor


}
  


