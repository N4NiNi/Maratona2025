#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois inteiros (usada na ordenação)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int max_score(int n, int a[]) {
    // Ordena o array em ordem crescente
    qsort(a, 2 * n, sizeof(int), compare);

    int score = 0;
    // Emparelha os números consecutivos e soma o mínimo de cada par
    for (int i = 0; i < 2 * n; i += 2) {
        score += a[i];
    }

    return score;
}

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int n;
        scanf("%d", &n); // Lê o número de pares

        int a[100]; // Como n <= 50, 2n <= 100
        for (int i = 0; i < 2 * n; i++) {
            scanf("%d", &a[i]); // Lê os números no quadro
        }

        int result = max_score(n, a);
        printf("%d\n", result); // Imprime o resultado
    }

    return 0;
}