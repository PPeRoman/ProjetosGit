#include <stdio.h>
#include <locale.h>

typedef struct Dados
{
    int num;
    float vetor[100];

} Dados;

void inverter(float *v, int n);

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

    inverter(dados.vetor, dados.num);

    printf("Vetor invertido: \n");

    for (int i = 0; i < dados.num; i++)
        printf("%.2f ", *(dados.vetor + i));

    printf("\n");

    return 0;
}

void inverter(float *v, int n)
{
    float *ini = v;
    float *fim = v + (n - 1);

    while (ini < fim) {
        float aux = *ini;
        *ini = *fim ;
        *fim = aux ;

        ini++ ;
        fim-- ;
    }

}