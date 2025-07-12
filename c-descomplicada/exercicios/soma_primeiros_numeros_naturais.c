#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um número: ");
    int n;
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Por favor, digite um número natural maior que zero.\n");
        return 1; // Retorna um código de erro
    }

    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("A soma dos primeiros %d números naturais é: %d\n", n, soma);
    return 0;
}