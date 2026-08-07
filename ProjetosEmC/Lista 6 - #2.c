#include <stdio.h>

int main(void)
{
    int contMedia = 0, contNotas = 0;
    float total, media = 0, notas[10];

    for (int i = 0; i < 10; i++) {
        printf("Insira a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
        contMedia++ ;
        media = media + notas[i] ;
        if (notas[i] >= 6)
            contNotas++ ;
    }

    media = media / contMedia ;
    printf("Media da turma: %.2f\nNumero de aprovados: %d\n", media, contNotas);

    return 0;
}
