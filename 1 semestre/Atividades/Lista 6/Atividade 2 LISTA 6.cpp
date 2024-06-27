#include<stdio.h>
main()
{
	int num;
	int triplo;
	printf("Me informe um numero: ");
	scanf("%d", &num);
	
	while(num!=-999)
	{
		printf("O triplo e: %d", (num*3));
		printf("Informe uma numero: ");
		scanf("%d", &num);
		
	}
	
	printf("O triplo e: %d", (num*3));
	

}
