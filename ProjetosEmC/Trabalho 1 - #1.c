#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numHoras, valHora, codFunc, setFunc;
    double salFunc;
    printf("Insira o codigo do funcionario: ");
    scanf("%d", &codFunc);
    printf("Insira o numero total de horas: ");
    scanf("%d", &numHoras);
    setFunc = codFunc / 1000 ;
    if (setFunc == 1) {
        valHora = 7 ;
    }
    else if (setFunc == 2) {
        valHora = 11 ;
    }
    else if (setFunc == 3) {
        valHora = 18 ;
    }
    if (numHoras <= 400) {
        salFunc = numHoras * valHora ;
    }
    else {
        salFunc = (400 * valHora) + ((numHoras - 400) * (valHora * 1.10)) ;
    }
    printf("Salario do funcionario: %.2lf", salFunc);
    return 0;
}
