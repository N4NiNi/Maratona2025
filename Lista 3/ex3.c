#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int row = -1, col = -1;

    // Lê a matriz e encontra a posição do número 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Calcula a distância em termos de linhas e colunas
    int moves = abs(row - 2) + abs(col - 2);

    printf("%d\n", moves);

    return 0;
}