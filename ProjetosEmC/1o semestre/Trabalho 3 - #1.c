#include <stdio.h>

int main(void)
{
    int qtdeA, qtdeV;
    float consKwh, valorKwh, valorKwhR, valorKwhC, valorKwhI;
    char tipo, faixa;

    qtdeA = 0 ;
    qtdeV = 0 ;
    valorKwhR = 0 ;
    valorKwhC = 0 ;
    valorKwhI = 0 ;

    printf("Insira o consumo em Kwh (ou 0 para finalizar): ");
    scanf("%f", &consKwh);

    while (consKwh != 0) {
        printf("Insira o tipo da instalacao (R - Residencial | C - Comercial | I - Industrial): ");
        scanf(" %c", &tipo);
        printf("Insira o tipo da faixa (A - Amarela | V - Vermelha): ");
        scanf(" %c", &faixa);

        if (tipo == 'R' || tipo == 'r') {
            if (consKwh <= 500) {
                valorKwh = consKwh * 0.4 ;
            }
            else {
                valorKwh = consKwh * 0.55 ;
            }
        }
        else if (tipo == 'C' || tipo == 'c') {
            if (consKwh <= 1000) {
                valorKwh = consKwh * 0.6 ;
            }
            else {
                valorKwh = consKwh * 0.7 ;
            }
        }
        else if (tipo == 'I' || tipo == 'i') {
            if (consKwh <= 5000) {
                valorKwh = consKwh * 0.65 ;
            }
            else {
                valorKwh = consKwh * 0.85 ;
            }
        }
        else {
            printf("Valor Invalido");
            return 7;
        }

        if (faixa == 'V' || faixa == 'v') {
            valorKwh = valorKwh * 1.2 ;
            qtdeV = qtdeV + 1 ;
        }
        else if (faixa == 'A' || faixa == 'a') {
            qtdeA = qtdeA + 1 ;
        }
        else {
            printf("Valor Invalido");
            return 8;
        }

        if (tipo == 'R' || tipo == 'r') {
            valorKwhR = valorKwhR + valorKwh;
        }
        else if (tipo == 'C' || tipo == 'c') {
            valorKwhC = valorKwhC + valorKwh;
        }
        else if (tipo == 'I' || tipo == 'i') {
            valorKwhI = valorKwhI + valorKwh;
        }

        printf("Insira o consumo em Kwh (ou 0 para finalizar): ");
        scanf("%f", &consKwh);
    }
    printf("\n\nValor do Kwh da instalacao Residencial: %.2f\nValor do Kwh da instalacao Comercial: %.2f\nValor do Kwh da instalacao Industrial: %.2f\nQuantidade de contas Amarelas: %d\nQuantidade de contas Vermelhas: %d\n", valorKwhR, valorKwhC, valorKwhI, qtdeA, qtdeV);

    return 0;
}
