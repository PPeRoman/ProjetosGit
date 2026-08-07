#include <stdio.h>

int main(void)
{
    int cont = 0;
    float total, media, gastos[12];
    media = 0 ;

    for (int i = 0; i < 12; i++) {
        printf("Insira o %do gasto: ", i + 1);
        scanf("%f", &gastos[i]);
        cont++ ;
        total = total + gastos[i];
    }

    media = total / cont ;
    printf("Total de gastos: %.2f\nMedia dos gastos: %.2f\n", total, media);

    return 0;
}
