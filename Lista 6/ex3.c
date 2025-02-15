#include <stdio.h>

int main() {
    int t; // Número de casos de teste
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int array[40];
        int oddIndexCount = 0, evenIndexCount = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
            if (i % 2 == 0 && array[i] % 2 != 0) {
                // Índice par com valor ímpar
                evenIndexCount++;
            } else if (i % 2 == 1 && array[i] % 2 != 1) {
                // Índice ímpar com valor par
                oddIndexCount++;
            }
        }

        // Verifica se é possível tornar o array "good"
        if (evenIndexCount == oddIndexCount) {
            printf("%d\n", evenIndexCount);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}