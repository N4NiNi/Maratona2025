#include <stdio.h>

int main() {
    int M, N;

    // Lê os valores de M e N
    scanf("%d %d", &M, &N);

    // Calcula o número máximo de dominós que podem ser colocados
    int maxDominoes = (M * N) / 2;

    // Imprime o resultado
    printf("%d\n", maxDominoes);

    return 0;
}