#include<stdio.h>
#include<string.h>
main()
{
	//Escreva um programa que inverta os caracteres de um string.
	char inverter[30], imput[30];
	
	printf("Me informe uma palavra que vou inverte-la: ");
	scanf("%s", &imput);
	
	for (int i = 0; i < strlen(imput); i++ )
	{
		inverter[i] = imput[strlen(imput) - i - 1];	
	}
	
	printf("Sua string ao contrario fica: %s", inverter);
	

}
