#include <stdio.h>
#include <string.h>

void func(char str[100], char let);

int main() {
    char let;
    char str[100];

    printf("Me informe uma palavra: ");
    gets(str);

    printf("Me informe uma letra da palavra: ");
    scanf(" %c", &let);  

    func(str, let);
    
    return 0;
}

void func(char str[100], char let) {
    int tam = strlen(str);
    char newstr[100];

    for (int i = 0; i < tam; i++) {
        if (str[i] == let) {
            newstr[i] = '_';  
        } else {
            newstr[i] = str[i];  
        }
    }
    newstr[tam] = '\0';  

    printf("A nova palavra: %s\n", newstr);
}
