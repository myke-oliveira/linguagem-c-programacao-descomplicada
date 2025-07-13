#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero);

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehPrimo(numero))
    {
        printf("%d é primo.\n", numero);
    }
    else
    {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}

bool ehPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}