#include <stdio.h>
#include <math.h>
#define PI 3.14159

float calculaVolume(float r, float h);

int main(void)
{
    float raio, altura;
    scanf("%f%f", &raio, &altura);
    printf("%.2f\n", calculaVolume(raio, altura));

    return 0;
}

float calculaVolume(float r, float h)
{
    float v;
    v = PI * pow(r, 2) * h ;

    return v;
}