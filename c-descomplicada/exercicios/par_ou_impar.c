#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("Digite um número: ");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("O número %d é par.\n", input);
    }
    else
    {
        printf("O número %d é ímpar.\n", input);
    }

    return 0;
}