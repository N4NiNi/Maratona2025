#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o número de problemas

    int count = 0; // Contador para problemas que serão implementados

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya); // Lê as opiniões dos amigos

        // Verifica se pelo menos dois amigos estão seguros
        if (petya + vasya + tonya >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}