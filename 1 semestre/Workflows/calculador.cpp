#include <stdio.h>
  int main(){
  	
  	  char operation;
  	 float numb1, numb2, result ;
  	   
  	    printf("Escolha a operacao:  Adicao(+), Subtracao(-), Multiplicacao(*), Divisao(/)");
  	    scanf("%c",&operation);
  	    
  	    printf("Digite o primeiro numero:");
  	    scanf("%f",&numb1);
  	      
  	    printf("Digite o segundo numero:");
  	    scanf("%f",&numb2);
  
          if(operation == '+'){
           result = numb1 + numb2;
         }
  	       else if (operation == '-'){
  	         result = numb1 - numb2;         
         }
  	       else if (operation== '*'){
  	         result = numb1 * numb2;
  	     }
		   else if (operation == '/'){
		   	  result = numb1 / numb2;
		   }  	
  	
  	     printf("Resultado: %2.f\n",result);
  }