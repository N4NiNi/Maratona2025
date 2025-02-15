#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    scanf("%s", username); // Lê o nome de usuário

    int count[26] = {0}; // Array para contar a ocorrência de cada letra
    int distinct = 0;

    // Conta o número de caracteres distintos
    for (int i = 0; i < strlen(username); i++) {
        if (count[username[i] - 'a'] == 0) {
            distinct++;
            count[username[i] - 'a'] = 1;
        }
    }

    // Determina o gênero com base no número de caracteres distintos
    if (distinct % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}