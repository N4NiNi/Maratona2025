#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s); // Lê a string de entrada

    int count[4] = {0}; // Contador para os números 1, 2 e 3

    // Conta a ocorrência de cada número
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') count[1]++;
        if (s[i] == '2') count[2]++;
        if (s[i] == '3') count[3]++;
    }

    // Reconstrói a string em ordem não decrescente
    int index = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (index > 0) {
                s[index++] = '+';
            }
            s[index++] = '0' + i;
        }
    }
    s[index] = '\0'; // Finaliza a string

    printf("%s\n", s);

    return 0;
}