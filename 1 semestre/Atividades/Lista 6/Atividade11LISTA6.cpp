#include<stdio.h>
main()
{
        float salmin, hrtra, hrextra, valorhora, valorextra,valortotalextra,salmes,salbruto,salliq;
        int dep, valordep;
        float salfinal;
        printf("Me infome o salario minimo: ");
        scanf("%f", &salmin);

        printf("Me a quantidade de horas trabalhadas: ");
        scanf("%f", &hrtra);

        while(hrtra != -1)
        {

            printf("Quantos dependes voce tem: ");
            scanf("%d", &dep);

            printf("Quantidade de horas extras: ");
            scanf("%f", &hrextra);

        valorhora = (salmin/10);
        valorextra = (valorhora/2);
        valortotalextra=valorhora + valorextra;
         salmes=hrtra * valorhora;
        valordep= dep*32;
        salbruto=salmes+valordep+valortotalextra;


        printf("O valor da hora da trabalhada e: %.2f\n", valorhora);
        printf("O salario do seu mes e: %.2f\n", (salmes));
        printf("O seu acrescimo de dependentes e: %d\n ", (valordep));
        printf("O valor da hora extra e: %.2f\n", (valortotalextra));
        printf("O salario bruto e: %.2f\n", (salbruto));
        if(salbruto <=900)
        {
                printf("Isento de imposto de renda");
                salliq=salbruto;
        }
        else if(salbruto <=1500)
        {
                printf("Imposto de renda de 10%");
                salliq = salbruto * 0.9;
        }
        else
        {
                printf("Imposto de renda de 20%");
                salliq= salbruto *0.8;
        }
            printf("O salario liquido e: %.2f\n",salliq);

            if(salliq <= 900)
            {
                salfinal = salliq + 100;
            }
            else
            {
                salfinal = salliq + 50;
            }


                printf("Seu salario a receber ficou: %.2f\n", salfinal);

       printf("Me infome o salario minimo: ");
        scanf("%f", &salmin);
            
        }



}