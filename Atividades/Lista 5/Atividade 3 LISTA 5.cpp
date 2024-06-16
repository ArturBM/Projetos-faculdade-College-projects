#include<stdio.h>
main()
{
	int n, i, num;
			printf("Informe a quantidade de vezes que deseja triplicar: \n");
		scanf("%i", &n);
	
	for( i=1; i<=n; i++)
	{
	printf("Qual numero deseja triplicar:  \n");
		scanf("%i", &num);
		
		printf("O triplo e: %i\n", num*3);
	
	}
	
}
