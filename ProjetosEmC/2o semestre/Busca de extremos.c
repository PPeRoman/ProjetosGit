#include <stdio.h>
#include <locale.h>

typedef struct Dados
{
    int num;
    float vetor[100], mai, men;

} Dados;

void extremos(float *v, int n, float *maior, float *menor);

int main(void)
{
    setlocale(LC_CTYPE, "");

    Dados dados;

    do {
        printf("Quantidade de elementos: ");
        scanf("%d", &dados.num);
    } while (dados.num <= 0 || dados.num > 100);

    for (int i = 0; i < dados.num; i++) {
        printf("%do Elemento: ", i + 1);
        scanf("%f", dados.vetor + i);
    }

    extremos(dados.vetor, dados.num, &dados.mai, &dados.men);

    printf("\nMaior valor encontrado: %.2f", dados.mai);
    printf("\nMenor valor encontrado: %.2f", dados.men);

    return 0;
}

void extremos(float *v, int n, float *maior, float *menor)
{
    float *fV = v + n;

    *maior = *v ;
    *menor = *v ;

    v++ ;

    while (v < fV) {
        if (*v > *maior)
            *maior = *v ;

        if (*v < *menor)
            *menor = *v ;

        v++ ;
    }

}