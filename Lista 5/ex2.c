#include <stdio.h>

int main() {
    int k, r;
    scanf("%d %d", &k, &r); // Lê o preço da pá e o valor da moeda r

    int n = 1; // Começa com 1 pá
    while (1) {
        int total = n * k;
        // Verifica se o total pode ser pago sem troco
        if (total % 10 == 0 || total % 10 == r) {
            break;
        }
        n++;
    }

    printf("%d\n", n); // Imprime o número mínimo de pás

    return 0;
}