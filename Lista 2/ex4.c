#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Lê o número de casos de teste

    while (t--) {
        long long n, m;
        scanf("%lld %lld", &n, &m); // Lê n e m para cada caso

        if (n == 1) {
            printf("0\n");
        } else if (n == 2) {
            printf("%lld\n", m);
        } else {
            printf("%lld\n", 2 * m);
        }
    }

    return 0;
}