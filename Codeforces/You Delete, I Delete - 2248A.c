#include <stdio.h>
#include <string.h>

int main(void)
{
    int zero, one, n;
    char s[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %s", s);
        zero = 0 ;
        one = 0 ;

        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == '0' && zero == 0)
                zero = 1 ;
            else if (s[j] == '1' && one == 0)
                one = 1 ;
            else
                printf("%c", s[j]);
        }
        printf("\n");
    }

    return 0;
}
