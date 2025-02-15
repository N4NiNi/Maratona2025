#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o valor de n

    int table[10][10]; // Como n <= 10, podemos usar um array de tamanho fixo

    // Preenche a primeira linha e a primeira coluna com 1
    for (int i = 0; i < n; i++) {
        table[0][i] = 1;
        table[i][0] = 1;
    }

    // Preenche o restante da tabela
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            table[i][j] = table[i-1][j] + table[i][j-1];
        }
    }

    // Encontra o valor máximo na tabela
    int max_value = table[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] > max_value) {
                max_value = table[i][j];
            }
        }
    }

    printf("%d\n", max_value); // Imprime o valor máximo

    return 0;
}