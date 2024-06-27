#include<stdio.h>
main()
{
	float basemaior, basemenor, altura, area;
	printf("Informe a base maior: ");
	scanf("%f", &basemaior);
	printf("Informe a base menor: ");
	scanf("%f", &basemenor);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	area = ((basemaior + basemenor) *altura)/2;
	printf("A area ficou: %.2f", area);
	
	
	
}
