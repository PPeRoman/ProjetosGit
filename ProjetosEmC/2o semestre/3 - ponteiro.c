#include <stdio.h>

void somarVetores(float *pA, float *pB, float *pC, int n);

int main(void)
{
    int n;
    float A[100], B[100], C[100];

    printf("Quantidade de elementos dos vetores: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Valor inválido...\n");

        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d Elemento de A: ", i + 1);
        scanf("%f", A + i);
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d Elemento de B: ", i + 1);
        scanf("%f", B + i);
    }

    somarVetores(A, B, C, n);

    for (int i = 0; i < n; i++) {
        printf("\nC[%d] -> %.2f + %.2f = %.2f", i, *(A + i), *(B + i), *(C + i));
    }

    printf("\n");

    return 0;
}

void somarVetores(float *pA, float *pB, float *pC, int n)
{
    float *fA = pA + n;

    while (pA < fA) {
        *pC = *pA + *pB ;
        pA++ ;
        pB++ ;
        pC++ ;
    }

}