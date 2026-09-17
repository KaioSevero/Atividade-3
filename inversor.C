#include <stdio.h>
#include <string.h>
int main() {
    char texto[100];
    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);
    // remove o \n deixado pelo fgets
    texto[strcspn(texto, "\n")] = '\0';
    int tamanho = strlen(texto);
    printf("Texto invertido: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n");
    return 0;
}
