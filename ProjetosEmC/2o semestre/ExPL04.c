#include <stdio.h>

int tabuada(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    tabuada(num);

    return 0;
}

int tabuada(int n)
{
    int tab[11], cont = 0;

    for (int i = 0; i < 10; i++) {
        tab[i] = n + cont ;

        cont = cont + n ;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", tab[i]);
    }
}