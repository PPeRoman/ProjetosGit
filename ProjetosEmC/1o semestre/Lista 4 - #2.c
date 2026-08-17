#include <stdio.h>

int main(void)
{
    int gratif;
    float salFunc, aReceber;
    printf("Salario do funcionario: ");
    scanf("%f", &salFunc);
    if (salFunc <= 1350)
        gratif = 1000 ;
    else {
        if (salFunc > 1350 && salFunc <= 1600)
            gratif = 750 ;
        else {
            if (salFunc > 1600 && salFunc <= 1900)
                gratif = 500 ;
            else {
                if (salFunc > 1900)
                    gratif = 350 ;
            }
        }
    }
    aReceber = (salFunc - (salFunc * 0.07)) + gratif ;
    printf("Valor a Receber: %.2f\n", aReceber);

    return 0;
}
