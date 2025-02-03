#include <stdio.h>

int main() {
    int a, maior;
    maior = 0;
    while(1){
        scanf("%d", &a);
        if(a>maior){
            maior = a;
        }
        if(a == 0){
            break;
        }
    }
    printf("%d", maior);
    
}
