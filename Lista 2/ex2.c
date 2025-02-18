#include <stdio.h>
#include <string.h>

int main() {
    int n, removals = 0;
    char stones[51];

    // Leitura do número de pedras e da sequência de cores
    scanf("%d", &n);
    scanf("%s", stones);

    // Itera sobre as pedras para contar repetições consecutivas
    for (int i = 0; i < n - 1; i++) {
        if (stones[i] == stones[i + 1]) {
            removals++;
        }
    }

    printf("%d\n", removals);

    return 0;
}
