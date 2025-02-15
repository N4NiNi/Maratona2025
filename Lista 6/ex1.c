#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m); // Lê o número de movimentos e o número desejado de cubos

        // Verifica se é possível obter exatamente m cubos após n movimentos
        if (m <= n && (n - m) % 2 == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}