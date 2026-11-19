#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    float n, A[101], B[101], C[101];

    printf("Elementos do vetor 'A': ");
    scanf("%f", &n);

    while (n != 0 && i < 100) {
        A[i] = n ;
        i++ ;

        printf("Elemento %d: ", i + 1);
        scanf("%f", &n);
    }

    printf("Elementos do vetor 'B': ");
    scanf("%f", &n);

    while (n != 0 && j < i) {
        B[j] = n ;
        j++ ;

        if (j < i) {
            printf("Elemento %d: ", j + 1);
            scanf("%f", &n);
        }
    }

    for (int k = 0; k < i; k++)
        C[k] = A[k] + B[k] ;

    for (int k = 0; k < i; k++)
        printf("\nSoma de %.2f e %.2f: %.2f", A[k], B[k], C[k]);

    return 0;
}

