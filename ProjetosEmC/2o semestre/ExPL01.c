#include <stdio.h>

int produto(int a, int b);

int main(void)
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d\n", produto(num1, num2));

    return 0;
}

int produto(int a, int b)
{
    int prod;
    prod = a * b ;

    return prod;
}