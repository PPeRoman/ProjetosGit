#include <stdio.h>

int main()
{
    int t, n;
    char s[10000000];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            scanf("%s", &s[j]);
        }

        for (int j = 0; j < n; j++) {
            if (s[j] == '?') {
                if (s[j + 1] == '0' && s[j + 2] == '1' && s[j + 3] == '1') {
                    s[j] = '0' ;
                }
                if (s[j + 1] == '0' && s[j + 2] == '1' && s[j + 3] == '0') {
                    s[j] = '0' ;
                }
            }
        }
    }

    return 0;
}