#include <stdio.h>
#include <string.h>

int quantidade(char a[]);

int main(void)
{
    char num[50];
    scanf("%s", &num);
    printf("%d\n", quantidade(num));

    return 0;
}

int quantidade(char a[])
{
    int qtde;
    qtde = strlen(a) ;

    return qtde;
}