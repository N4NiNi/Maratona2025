#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois inteiros (usada na ordenação)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int max_sum(int n, int a[]) {
    // Ordena o array em ordem não decrescente
    qsort(a, n, sizeof(int), compare);

    // Calcula a soma inicial
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    // Tenta negar segmentos para maximizar a soma
    int max_sum = sum;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int current_sum = sum;
            for (int i = l; i <= r; i++) {
                current_sum -= 2 * a[i]; // Negar o elemento
            }
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int n;
        scanf("%d", &n); // Lê o número de elementos no array

        int a[50];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Lê os elementos do array
        }

        int result = max_sum(n, a);
        printf("%d\n", result);
    }

    return 0;
}