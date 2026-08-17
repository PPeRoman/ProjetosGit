#include <stdio.h>

int main(void)
{
    float salAntigo, salNovo, aumento;
    printf("Valor do salario atual: ");
    scanf("%f", &salAntigo);
    if (salAntigo <= 1300) {
        aumento = salAntigo * 0.15 ;
    }
    else if (salAntigo > 1300 && salAntigo <= 1600) {
        aumento = salAntigo * 0.10 ;
    }
    else if (salAntigo > 1600 && salAntigo <= 1900) {
        aumento = salAntigo * 0.05 ;
    }
    else if (salAntigo > 1900) {
        aumento = salAntigo * 0 ;
    }
    salNovo = salAntigo + aumento ;
    printf("Valor do aumento: %.2f\nValor do novo salario: %.2f\n", aumento, salNovo);

    return 0;
}
