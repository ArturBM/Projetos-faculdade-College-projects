#include<stdio.h>
main()
{
	float sal, aumento;
	
	
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	
	
	if(sal < 2000)
	{
		aumento = sal * 0.3;
		
	}
	else if(sal < 5000)
	{
		aumento = sal* 0.2;
	}
	else
	{
		aumento = sal*0.1;
	}


	printf(" O aumento e de: %.2f\n", aumento);
	printf(" O seu novo salario e: %.2f", aumento + sal);





	
}

