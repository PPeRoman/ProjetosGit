#include <stdio.h>

int main(void)
{
    float custoCons, custoFab, dist, imp;
    printf("Custo de fabrica: ");
    scanf("%f", &custoFab);
    if (custoFab <= 30000) {
        dist = 0.05 ;
        imp = 0 ;
    }
    else {
        if (custoFab > 30000 && custoFab <= 65000) {
            dist = 0.1 ;
            imp = 0.15 ;
        }
        else {
            if (custoFab > 65000) {
                dist = 0.15 ;
                imp = 0.2 ;
            }
        }
    }
    custoCons = custoFab + (custoFab * dist) + (custoFab * imp) ;
    printf("Custo ao consumidor: %.2f\n", custoCons);

    return 0;
}
