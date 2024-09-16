#include<stdio.h>
void imposto(float salario);
void sal(float salario);
void classi(float salario);
int main(){
    float salario;
    int op;
    printf("Qual o seu salario: ");
    scanf("%f", &salario);
    printf("Selecio a opcao: \n1.imposto\n2.novo salario\n3.classificacao\nDigite: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        imposto(salario);
        break;
    case 2: sal(salario);
        break;
    case 3: classi(salario);
    break;    

    }
    

}

void imposto(float salario){
    float imp;
    if(salario < 500){
        imp= salario * 0.05;
    }
     else if(salario <= 850){
        imp= salario * 0.1;
    }
    else{
        imp= salario * 0.15;
    }
    printf("%.2f\n", imp);
}

void sal(float salario){
    float novosalario;
    if(salario < 450){
        novosalario= salario + 100;
    }
     else if(salario < 750){
        novosalario= salario + 75;
    }
    else if(salario<=1499.99){
        novosalario= salario + 50;
    }
    else{
        novosalario = salario + 25;
    }
    printf("%.2f\n", novosalario);
}

void classi(float salario){
    float classif;
    if(salario <= 700){
       printf("Mal remunerado");
    }
    else{
       printf("Bem remunerado");
    }
    
}

