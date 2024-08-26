#include<stdio.h>
int main() {
    int j, i, M[5][10], maior;
    char Nomes[5][10][30];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Me informe o nome do atleta %dx%d: ", i + 1, j + 1);
            gets(Nomes[i][j]); 

            printf("Me informe a altura do atleta %dx%d: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);       
            fflush(stdin);  
        }
    }

    
    for (i = 0; i < 5; i++) {
        maior = M[i][0];  
        for (j = 1; j < 10; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
            }
        }
        printf("A maior altura da delegação %d: %d\n", i + 1, maior);
    }

   
    printf("Mostrar valores da matriz M:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}