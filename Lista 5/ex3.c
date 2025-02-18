#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o número de peças de sushi

    int t[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]); // Lê os tipos de sushi
    }

    int max_len = 0;
    int current_len = 1;
    int prev_len = 0;
    int current_type = t[0];

    for (int i = 1; i < n; i++) {
        if (t[i] == current_type) {
            current_len++;
        } else {
            max_len = max(max_len, min(prev_len, current_len) * 2);
            prev_len = current_len;
            current_len = 1;
            current_type = t[i];
        }
    }
    max_len = max(max_len, min(prev_len, current_len) * 2);

    printf("%d\n", max_len);

    return 0;
}