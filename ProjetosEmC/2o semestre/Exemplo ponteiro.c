#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int vNumero;
    int *vPonteiro;

    vPonteiro = &vNumero ;
    vNumero = 25 ;

    printf("\nConteudo da variavel vNumero: %d", vNumero);
    printf("\nConteudo da variavel vPonteiro: %d", vPonteiro);
    printf("\nEndereco de memoria onde esta vNumero: %d", &vNumero);
    printf("\nEndereco de memoria onde esta vPonteiro: %d", &vPonteiro);
    printf("\nConteudo da variavel apontada por vPonteiro: %d", *vPonteiro);

    printf("\n");

    return 0;
}