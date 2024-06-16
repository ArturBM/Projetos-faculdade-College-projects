#include<stdio.h>
int main()
{
	
	int i, num;
	float media;
	float soma=0;

	for(i=1; i<=4; i++)
	{
		printf("Me informe sua nota %d: ", i);
		scanf("%d", &num);
		
		soma = num + soma;
		media = soma / 4; 
	}
	printf("A media e: %.2f\n", media);
	
}
