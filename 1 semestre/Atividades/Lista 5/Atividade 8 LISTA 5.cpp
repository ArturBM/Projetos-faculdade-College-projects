#include<stdio.h>
int main()
{
	int i, idade;
	char nome[30],sexo;
	
	for(i=1;i<=20;i++)
	{
		printf("Informe seu NOME: ");
		fflush(stdin);
		gets(nome);
		printf("Informe o sexo F/M: ");
		scanf("%c", &sexo);
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		if(sexo =='M' && idade >21)
		{
			printf("%s, homem maior de 21\n", nome);
		}
	}
	
}
