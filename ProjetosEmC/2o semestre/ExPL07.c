#include <stdio.h>

int inverteNumero(int a);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", inverteNumero(num));

    return 0;
}

int inverteNumero(int a)
{
    int invertido = 0;
    int ult;

    while (a > 0) {
        ult = a % 10 ;
        invertido = (invertido * 10) + ult ;
        a = a / 10 ;
    }

    return invertido;
}