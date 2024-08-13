#include <stdio.h>

int main() {
    int numeros[7]; 

   
    printf("Digite 7 números inteiros:\n");
    for (int i = 0; i < 7; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nListagem dos números digitados:\n");
    for (int i = 0; i < 7; i++) {
        printf("Número %d: %d\n", i + 1, numeros[i]);
    }
}