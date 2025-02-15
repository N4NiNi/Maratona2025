#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        char a[200005], b[200005];
        scanf("%s", a);
        scanf("%s", b);

        int maxK = 0, j = 0;

        // Otimiza verificando diretamente subsequência
        for (int i = 0; i < n; i++) {
            while (j < m && b[j] != a[i]) {
                j++;
            }
            if (j < m) {
                maxK = i + 1;
                j++;
            } else {
                break;
            }
        }

        printf("%d\n", maxK);
    }

    return 0;
}
