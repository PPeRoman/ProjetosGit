#include <stdio.h>
#include <string.h>

int main (void)
{
    int n, k, a[100], ad = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] >= a[k] && a[i] != 0)
        ad++ ;
    }

    printf("%d", ad);

    return 0;
}
