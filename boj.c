#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        for (int j = N; N - j + 1 < N; j--) {
            printf("*");
        }
        printf("\n");
    }
   for (int i = 0; i < N-1; i++) {
        for (int j = 0; j< N-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
