#include <stdio.h>
#include <stdlib.h>

// Função para ordenar três números
void sort(int *a, int *b, int *c) {
    if (*a > *b) { int temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { int temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { int temp = *a; *a = *b; *b = temp; }
}

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3); // Lê as coordenadas dos amigos

    // Ordena as coordenadas para encontrar a mediana
    sort(&x1, &x2, &x3);

    // A mediana é x2 após a ordenação
    int meeting_point = x2;

    // Calcula a distância total
    int total_distance = abs(x1 - meeting_point) + abs(x2 - meeting_point) + abs(x3 - meeting_point);

    printf("%d\n", total_distance);

    return 0;
}