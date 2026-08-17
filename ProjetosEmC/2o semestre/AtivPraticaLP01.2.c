#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    unsigned long long int fn;

    scanf("%d", &n);

    fn = (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5)) ;

    printf("%llu\n", fn);

    return 0;
}