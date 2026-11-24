#include <stdio.h>

void selecao(int rep, int *n);

int main(void)
{
    int i = 0, numeros[20];

    do {
        if (scanf("%d", numeros + i) != 1)
            break;
        
        if (*(numeros + i) == 0)
            break;

        i++ ;
    } while (i < 20);

    selecao(i, numeros);

    for (int j = 0; j < i; j++)
        printf("%d ", *(numeros + j));

    return 0;
}

void selecao(int rep, int *n)
{
    for (int i = 0; i < rep; i++) {
        int menor = i ;

        for (int j = i + 1; j < rep; j++) {
            if (*(n + menor) > *(n + j)) {
                menor = j ;
            }
        }

        int aux = *(n + i);
        *(n + i) = *(n + menor) ;
        *(n + menor) = aux ;
    }

}