#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o número de vetores de força

    int x_sum = 0, y_sum = 0, z_sum = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z); // Lê as coordenadas de cada vetor
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    // Verifica se a soma de todas as coordenadas é zero
    if (x_sum == 0 && y_sum == 0 && z_sum == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}