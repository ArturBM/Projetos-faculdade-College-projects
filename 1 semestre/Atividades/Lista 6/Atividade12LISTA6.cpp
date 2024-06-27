#include<stdio.h>
main()
{

            float salCarlos, salJoao;
            int meses=0;
        printf("Quanto e o seu salario Carlos: ");
        scanf("%f", &salCarlos);

        salJoao = salCarlos/3;

        while(salCarlos >= salJoao)
        {
                meses++;
                
                salCarlos = salCarlos * 1.02;
                salJoao = salJoao * 1.05;

            
        }

printf("A quantidade de meses para que o Patrimonio de joao se torne maior e: %d\n", meses);

}