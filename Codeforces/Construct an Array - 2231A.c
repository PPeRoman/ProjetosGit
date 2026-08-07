#include <stdio.h>

int main(void)
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        for (int j = 1; j <= n; j++) {
            printf("%d ", 2 * j - 1);
        }

        printf("\n");
    }

    return 0;
}
