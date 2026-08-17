#include <stdio.h>

int main(void)
{ 
    int n, cont;
    unsigned long long int termo[100], a, b;

    printf("Informe n:\n");
    scanf("%d", &n); 

    if (n < 0 || n > 93)
        printf("Valor invalido\n");
    else { 
        a = 1;
        b = 0;
        cont = 0;
        while (cont < n) { 
            termo[cont] = a + b;
            a = b;
            b = termo[cont];
 
            cont = cont + 1;
        }
        
        for (int i = 0; i < n; i++) {
            printf("%llu\n", termo[i]);
        }
    }
 
    return 0;
}