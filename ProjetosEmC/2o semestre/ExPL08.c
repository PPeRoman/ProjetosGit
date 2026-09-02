#include <stdio.h>

void recebe(float nota[], int nn);
float mediaNotas(float notas[], int n);

int main(void)
{
    int num;
    float not[101];
    scanf("%d", &num);

    recebe(not, num);

    printf("%f\n", mediaNotas(not, num));

    return 0;
}

void recebe(float nota[], int nn)
{
    for (int i = 0; i < nn; i++)
        scanf("%f", &nota[i]);

}

float mediaNotas(float notas[], int n)
{
    float media = 0;
    
    for (int i = 0; i < n; i++)
        media = media + notas[i] ;
    
    media = media / n ;

    return media;
}