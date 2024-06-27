#include<stdio.h>
main()
{
	char nome[30],end[30],cidade[30],uf[20],cep[15],tel[15],cpf[20],RG[20];
	printf("Qual seu nome: ");
	scanf("%s", &nome);
	printf("Qual o seu endereco: ");
	scanf("%s", &end);
	printf("Qual a cidade em que voce habita: ");
	scanf("%s", &cidade);
	printf("Qual sua provincia: ");
	scanf("%s", &uf);
	printf("Qual o seu cep: ");
	scanf("%s", &cep);
	printf("Qual o seu numero de telefone: ");
	scanf("%s", &tel);
	printf("Qual seu cpf: ");
	scanf("%s", &cpf);
	printf("Informe seu RG para finalizarmos: ");
	scanf("%s", &RG);
	printf ("Cadastramos as seguintes informacoes:\n Nome: %s\n Endereço: %s\n Cidade: %s\n UF: %s\n Codigo postal: %s\n Telefone: %s\n Cpf: %s\n Registro Geral: %s", nome, end, cidade, uf, cep, tel, cpf, RG);
	
	
	
	
}
