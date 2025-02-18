#include <stdio.h>

int main() {
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4); // Lê as cores das quatro ferraduras

    int unique_colors = 1; // Pelo menos uma cor é única
    if (s2 != s1) unique_colors++;
    if (s3 != s1 && s3 != s2) unique_colors++;
    if (s4 != s1 && s4 != s2 && s4 != s3) unique_colors++;

    int min_horseshoes_to_buy = 4 - unique_colors; // Calcula o número de ferraduras a comprar

    printf("%d\n", min_horseshoes_to_buy);

    return 0;
}