#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o número de instruções

    int x = 0; // Inicializa a variável x com 0
    char statement[4]; // Buffer para armazenar cada instrução

    for (int i = 0; i < n; i++) {
        scanf("%s", statement); // Lê cada instrução

        // Verifica se a instrução é de incremento ou decremento
        if (strstr(statement, "++") != NULL) {
            x++;
        } else if (strstr(statement, "--") != NULL) {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}