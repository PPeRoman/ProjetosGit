#include <stdio.h>
#include <locale.h>

typedef struct Dados
{
    float vet[100];

} Dados;

void bubblesort(int cont, float *v);

int main(void)
{
    setlocale(LC_CTYPE, "Portuguese");

    Dados dados;
    int i = 0;

    do {
        printf("Insira o %do Elemento (0 - Cancelar): ", i + 1);

        if (scanf("%f", dados.vet + i) != 1)
            break;

        if (*(dados.vet + i) == 0)
            break;

        i++ ;
    } while (i < 100);

    bubblesort(i, dados.vet);

    for (int j = 0; j < i; j++)
        printf("\n%do Elemento em ordem crescente: %.2f", j + 1, *(dados.vet + j));

    printf("\n");

    return 0;
}

void bubblesort(int cont, float *v)
{
    const float *fV = v + cont - 1;

    while (v < fV) {
        int t = 0;

        for (float *i = v; i < fV; i++) {
            if (*i > *(i + 1)) {
                float aux = *i;
                *i = *(i + 1) ;
                *(i + 1) = aux ;

                t = 1 ;
            }
        }

        if (!t)
            break;

        fV-- ;
    }

}