#include <stdio.h>

int main() {
    int n, h, width = 0;

    // Leitura do número de amigos e altura da cerca
    scanf("%d %d", &n, &h);

    for (int i = 0; i < n; i++) {
        int height;
        scanf("%d", &height);

        // Incrementa a largura: 1 se <= h, 2 se > h
        if (height > h) {
            width += 2;
        } else {
            width += 1;
        }
    }

    printf("%d\n", width);

    return 0;
}
