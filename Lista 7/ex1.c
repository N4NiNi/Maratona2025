#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k); // Lê o número de pessoas (n) e o limite (k)

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Lê a quantidade de ouro de cada pessoa
        }

        int doacoes = 0; // Inicializa o contador de doações
        int ouro_robin = 0; // Inicializa o ouro do Robin Hood

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                ouro_robin += a[i]; // Robin Hood pega todo o ouro se for maior ou igual a k
            } else if (a[i] == 0 && ouro_robin > 0) {
                ouro_robin--; // Robin Hood dá 1 de ouro se a pessoa não tiver nada e ele tiver ouro
                doacoes++;   // Incrementa o contador de doações
            }
        }

        printf("%d\n", doacoes); // Imprime o número de pessoas que receberam ouro
    }

    return 0;
}