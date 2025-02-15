#include <stdio.h>
#include <stdlib.h>

// Função para simular o jogo e retornar o número de vencedores
int count_winners(int k, int a[], int n) {
    int *players = (int *)malloc((n + 1) * sizeof(int));
    for (int i = 1; i <= n; i++) {
        players[i] = 1; // 1 indica que o jogador está no jogo
    }

    int changed;
    do {
        changed = 0;
        for (int i = 0; i < k; i++) {
            int pos = a[i];
            if (pos <= n && players[pos]) {
                players[pos] = 0; // Remove o jogador
                changed = 1;
            }
        }
        // Reorganiza os jogadores restantes
        int new_n = 0;
        for (int i = 1; i <= n; i++) {
            if (players[i]) {
                new_n++;
                players[new_n] = i;
            }
        }
        n = new_n;
    } while (changed);

    free(players);
    return n;
}

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int k, q;
        scanf("%d %d", &k, &q); // Lê k e q

        int a[k];
        for (int i = 0; i < k; i++) {
            scanf("%d", &a[i]); // Lê a sequência a
        }

        int n[q];
        for (int i = 0; i < q; i++) {
            scanf("%d", &n[i]); // Lê os valores de n_i
        }

        for (int i = 0; i < q; i++) {
            int winners = count_winners(k, a, n[i]);
            printf("%d ", winners); // Imprime o número de vencedores
        }
        printf("\n");
    }

    return 0;
}