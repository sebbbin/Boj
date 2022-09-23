#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            printf(" ");
        }
        for (int i = N; i > 0; i--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}