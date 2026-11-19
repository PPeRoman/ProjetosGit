#include <stdio.h>

typedef struct Dados
{
    int num;
    float a[100], b[100];

} Dados;

int filtrarPositivos(float *pA, float *pB, int n);

int main(void)
{
    Dados dados;

    printf("Insira a quantidade de valores: ");
    scanf("%d", &dados.num);

    for (int i = 0; i < dados.num; i++) {
        printf("%do Elemento: ", i + 1);
        scanf("%f", dados.a + i);
    }

    int qntd = filtrarPositivos(dados.a, dados.b, dados.num);

    printf("\nQuantidade de elementos positivos: %d", qntd);

    for (int i = 0; i < dados.num; i++)
        printf("\n%do Elemento: %.2f", i + 1, *(dados.b + i));

    printf("\n");

    return 0;
}

int filtrarPositivos(float *pA, float *pB, int n)
{
    int cont = 0;
    const float *fA = pA + n;

    while (pA < fA) {
        if (*pA > 0) {
            *pB = *pA ;
            cont++ ;
            pB++ ;
        }

        pA++ ;
    }

    return cont;
}