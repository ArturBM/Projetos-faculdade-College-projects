#include<stdio.h>
main()
{
	int idade;
	char estadocivil;
	
	printf("Me informe sua idade: ");
	scanf("%d", &idade);
	
	
	int casados=0;
	int solteiros=0;
	float soma=0;
	int viuvo=0;
	int cont=0;
	int separados=0;
	getchar();
	while(idade > 0)
	{
		printf("Me informe o seu estado civil: ");
	scanf("%c", &estadocivil);
		cont++;
			if(estadocivil == 'c' || estadocivil == 'C')
			{
				casados++;
			}
			
			else if(estadocivil == 's' || estadocivil == 'S')
			{
				solteiros++;
			}
			else if(estadocivil == 'v' || estadocivil == 'V')
			{
				viuvo++;
				soma= soma + idade;
			}
			else if (estadocivil == 'd' || estadocivil == 'D')
			{
				separados++;
				
			}
						printf("Me informe sua idade: ");
						scanf("%d", &idade);
	fflush(stdin);
						//sair do ciclo
						
	}	
	
	printf("A quantidade de pessoas casadas: %d\n", casados);
	printf("A quantidade de pessoas solteiras: %d\n", solteiros);
	if(viuvo > 0){
	printf("A media das pessoas viuvas: %.2f\n", soma/viuvo);
	}
	printf("A porcentagem de pessoas separadas e: %d ", (separados *100)/cont);

	
	
}
