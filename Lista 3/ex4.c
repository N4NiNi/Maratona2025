#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o número de palavras

    char word[101]; // Buffer para armazenar cada palavra

    for (int i = 0; i < n; i++) {
        scanf("%s", word); // Lê cada palavra
        int length = strlen(word);

        if (length > 10) {
            // Abrevia a palavra
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            // Imprime a palavra sem alterações
            printf("%s\n", word);
        }
    }

    return 0;
}