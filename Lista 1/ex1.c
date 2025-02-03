#include <stdio.h>

int main() {
    int n, comando;
    int lampadaA = 0, lampadaB = 0;


    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &comando);

        if (comando == 1) {
            lampadaA = !lampadaA;
        } else if (comando == 2) {
            lampadaA = !lampadaA;
            lampadaB = !lampadaB;
        }
    }
    printf("%d\n", lampadaA);
    printf("%d\n", lampadaB);

    return 0;
}
