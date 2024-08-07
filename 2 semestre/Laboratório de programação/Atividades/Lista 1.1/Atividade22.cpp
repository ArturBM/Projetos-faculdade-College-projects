#include<stdio.h>
main()
{
	int i, j, m, soma=0, menor=9999;
	printf("Informe o tamanho da matriz: ");
	scanf("%d", &m);
	int mat[m][m];
	printf("Lendo a matriz\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\nencontrando o menor\n");
	for(i=0, j=m-1;i<m;i++, j--)
	{
		if(mat[i][j]<menor)
			menor=mat[i][j];
		
	}
	printf("\nimprimindo a matriz\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("O menor valor da diagonal secundaria e: %d", menor);
}
	
	
	
	