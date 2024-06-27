#include<stdio.h>
main()
{
	char nac, nome[30];
	printf("Informe B para brasileiro e E para estrangeiro:");
	scanf("%c", &nac);
	printf("Informe seu nome:");
	scanf("%s", &nome);
	printf("Nome: %s\n", nome);
	printf("Nacionalidade: %c", nac);
	
}
