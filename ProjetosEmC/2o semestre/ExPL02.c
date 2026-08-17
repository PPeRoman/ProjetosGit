#include <stdio.h>
#define DOLAR 5.44

float dolar(float a);

int main(void)
{
    float reais;
    scanf("%f", &reais);
    printf("%.2f\n", dolar(reais));

    return 0;
}

float dolar(float a)
{
    float dol;
    dol = a / DOLAR;

    return dol;
}