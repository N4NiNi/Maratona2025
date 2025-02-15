#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois inteiros (usada na ordenação)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int min_removals(int n, int k, int a[]) {
    // Ordena o array de dificuldades
    qsort(a, n, sizeof(int), compare);

    int max_length = 1;
    int current_length = 1;

    // Encontra a maior subsequência onde a diferença entre elementos consecutivos é <= k
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] <= k) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 1;
        }
    }

    // O número mínimo de remoções é o total de problemas menos o tamanho da maior subsequência válida
    return n - max_length;
}

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k); // Lê o número de problemas e o valor de k

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Lê as dificuldades dos problemas
        }

        int result = min_removals(n, k, a);
        printf("%d\n", result); // Imprime o resultado
    }

    return 0;
}