#include <stdio.h>
#include <stdlib.h>

void incrementaPorValor(int x)
{
    x++;
}

void incrementaPorReferencia(int *x)
{
    (*x)++;
}

int main()
{
    printf("Digite um valor:");

    int x;
    scanf("%d", &x);

    printf("Valor antes da função por valor: %d\n", x);
    incrementaPorValor(x);
    printf("Valor depois da função por valor: %d\n", x);

    printf("Valor antes da função por referência: %d\n", x);
    incrementaPorReferencia(&x);
    printf("Valor depois da função por referência: %d\n", x);

    return 0;
}