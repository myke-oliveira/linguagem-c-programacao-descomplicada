#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um número para ver sua tabuada: ");
    int numero;
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Por favor, digite um número natural maior ou igual a zero.\n");
        return 1; // Retorna um código de erro
    }

    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}