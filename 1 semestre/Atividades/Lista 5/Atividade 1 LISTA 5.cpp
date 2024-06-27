#include<stdio.h>
#include<math.h>
main()
{
   
    int i, num;
    float raiz;

    for (i = 1; i <= 4; i++) 
	{
        printf("Informe o numero %d: ", i);
        scanf("%d", &num);

        raiz = sqrt(num);
        printf("A raiz do número %d e: %.2f\n", num, raiz);
    }
			
}
		
		
