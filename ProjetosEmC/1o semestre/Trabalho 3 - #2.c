#include <stdio.h>

int main(void)
{
    int cont;
    float somaMes;
    float tabSemanal[48];
    float tabMensal[12];

    for (int i = 0; i < 48; i++) {
        scanf("%f", &tabSemanal[i]);
    }
    cont = 0 ;
    for (int i = 0; i < 12; i++) {
        somaMes = 0 ;
        for (int j = 0; j < 4; j++) {
            somaMes = somaMes + tabSemanal[cont] ;
            cont++ ;
        }
        tabMensal[i] = somaMes / 4 ;
    }
    for (int i = 0; i < 12; i++) {
        printf("\n%.2f", tabMensal[i]);
    }

    return 0;
}
