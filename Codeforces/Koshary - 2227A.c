#include <stdio.h>

int main (void)
{
    int t, x, y;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);

        if (x % 2 != 0 && y % 2 != 0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
