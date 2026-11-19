#include <stdio.h>
#include <locale.h>

// Criação das variáveis e do tipo "Dados"
typedef struct Dados
{
    int num;
    float vetor[100];

} Dados;

// Criação da função "bubblesort"
void bubblesort(float *v, int n);

int main(void)
{
    // Definição teclado ABNT
    setlocale(LC_CTYPE, "Portuguese");

    // Criação da variável do tipo criado ("Dados")
    Dados dados;

    // Quantidade de elementos do "dados.vetor"
    printf("Quantidade de elementos: ");
    scanf("%d", &dados.num);

    printf("Insira os valores: \n");

    // Definição dos valores de "dados.vetor"
    for (int i = 0; i < dados.num; i++) {
        printf("%do Elemento: ", i + 1);
        scanf("%f", dados.vetor + i);
    }

    // Chamando a função "bubblesort" utilizando as variáveis do tipo "Dados" como parâmetros
    bubblesort(dados.vetor, dados.num);

    // Mostrando "dados.vetor" em ordem crescente
    for (int i = 0; i < dados.num; i++)
        printf("\nValores em ordem crescente: %.2f", *(dados.vetor + i));

    printf("\n");

    return 0;
}

void bubblesort(float *v, int n)
{
    // Definindo o limite do vetor
    const float *fV = v + n - 1;

    // Repetição principal até o fim do vetor
    while (v < fV) {
        int t = 0;

        // Ordenação dos números
        for (float *i = v; i < fV; i++) {
            // Verificação se o número atual é maior que o próximo, se for, eles trocam de lugar
            if (*i > *(i + 1)) {
                float aux = *i ;
                *i = *(i + 1) ;
                *(i + 1) = aux ;

                t = 1 ;
            }
        }
        
        // Encerrar a sequência quando a ordem já estiver correta
        if (!t)
            break;
        fV-- ;
    }

}