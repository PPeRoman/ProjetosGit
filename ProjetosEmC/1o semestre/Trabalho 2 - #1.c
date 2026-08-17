#include <stdio.h>

int main(void)
{
    int mao1, mao2, resposta, soma;
    char jogador, escolha;
    printf("Qual jogador escolhera primeiro: (1,2) ");
    scanf(" %c", &jogador);
    printf("Par ou Impar: (I,i - Impar ou P,p - Par) ");
    scanf(" %c", &escolha);
    scanf("%d%d", &mao1, &mao2);
    soma = mao1 + mao2 ;
    resposta = soma % 2 ;
    if (jogador == '1') {
        if (escolha == 'I' || escolha == 'i') {
            if (resposta == 0) {
                printf("Jogador 2 venceu\n");
            }
            else {
                printf("Jogador 1 venceu\n");
            }
        }
        else if (escolha == 'P' || escolha == 'p') {
            if (resposta == 0) {
                printf("Jogador 1 venceu\n");
            }
            else {
                printf("Jogador 2 venceu\n");
            }
        }
    }
    else if (jogador == '2') {
        if (escolha == 'I' || escolha == 'i') {
            if (resposta == 0) {
                printf("Jogador 1 venceu\n");
            }
            else {
                printf("Jogador 2 venceu\n");
            }
        }
        else if (escolha == 'P' || escolha == 'p') {
            if (resposta == 0) {
                printf("Jogador 2 venceu\n");
            }
            else {
                printf("Jogador 1 venceu\n");
            }
        }
    }

}
