#include<stdio.h>
main()
{
	float diag1, diag2, area;
	printf("Informe uma das diagonais: ");
	scanf("%f", &diag1);
	printf("Informe outra diagonal: ");
	scanf("%f", &diag2);
	area = (diag1 * diag2)/2;
	printf("A area do losango ficou: %.2f", area);
	
	
	
}
