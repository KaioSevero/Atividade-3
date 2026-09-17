#include <stdio.h>
int main() {
    char nomes[50][30];
    float precos[50];
    int n;
    printf("Quantos itens deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); // limpa o \n deixado pelo scanf
    for (int i = 0; i < n; i++) {
        printf("Item %d - Nome: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        printf("Item %d - Preco: R$ ", i + 1);
        scanf("%f", &precos[i]);
        getchar();
    }
    float total = 0;
    printf("\n--- Resumo da Compra ---\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s R$ %.2f\n", nomes[i], precos[i]);
        total += precos[i];
    }
    printf("------------------------\n");
    printf("%-20s R$ %.2f\n", "Total:", total);
    return 0;
}
