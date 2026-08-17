#include <stdio.h>

int main(void)
{
    int qtdeVen;
    float valMes, valMeta, comissao, fat1, fat2, fat3, fatT;
    char nomeVend, setVend;

    fat1 = 0 ;
    fat2 = 0 ;
    fat3 = 0 ;
    qtdeVen = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%c%c%f%f", &nomeVend, &setVend, &valMes, &valMeta);

        if (valMes >= valMeta) {
            comissao = valMes * 0.05 ;
        }
        else {
            comissao = valMes * 0.02 ;
            qtdeVen++ ;
        }

        if (setVend = '1') {
            fat1++ ;
        }
        else {
            if (setVend = '2') {
                fat2++ ;
            }
            else {
                if (setVend = '3') {
                    fat3++ ;
                }
            }
        }
    }
    fatT = fat1 + fat2 + fat3 ;
    printf("%c\n%.2f\n", nomeVend, comissao);
    printf("%.2f\n%.2f\n%.2f\n", fat1, fat2, fat3);
    printf("%.2f\n", fatT);
    printf("%d\n", qtdeVen);

    return 0;
}
