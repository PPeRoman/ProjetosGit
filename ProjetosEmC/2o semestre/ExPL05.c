#include <stdio.h>

int soma(int a);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d\n", soma(num));

    return 0;
}

int soma(int a)
{
    int s = 0;

    while(a >= 0) {
        s = s + a ;
        scanf("%d", &a);
    }

    return s;
}