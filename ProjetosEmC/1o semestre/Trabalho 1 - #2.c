#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int quantVendas, val;
    double prFinal, valVenda, venAcrescida;
    char tipo, comp;
    printf("Digite o tipo do produto: (A,a = Areia; P,p = Pedrita; B,b = Brita; S,s = Saibro) ");
    scanf(" %c", &tipo);
    printf("Digite a composicao do produto: (F,f = Fina; M,m = Media; G,g = Grossa) ");
    scanf(" %c", &comp);
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quantVendas);
    if (tipo == 'A' || tipo == 'a') {
        val = 34 ;
    }
    else if (tipo == 'P' || tipo == 'p') {
        val = 42 ;
    }
    else if (tipo == 'B' || tipo == 'b') {
        val = 30 ;
    }
    else if (tipo == 'S' || tipo == 's') {
        val = 60 ;
    }
    if (comp == 'F' || comp == 'f') {
        prFinal = val ;
    }
    else if (comp == 'M' || comp == 'm') {
        prFinal = val * 1.15 ;
    }
    else if (comp == 'G' || comp == 'g') {
        prFinal = val * 1.25 ;
    }
    valVenda = prFinal * quantVendas ;
    if (valVenda >= 750) {
        venAcrescida = valVenda ;
    }
    else {
        venAcrescida = valVenda + 45 ;
    }
    printf("Preco final do produto: %.2lf\n", prFinal);
    printf("Valor total da venda: %.2lf", venAcrescida);
    return 0;
}
