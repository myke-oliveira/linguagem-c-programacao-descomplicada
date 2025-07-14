#include <stdlib.h>
#include <stdio.h>

int fatorial(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * fatorial(x - 1);
}

int main()
{
    printf("Digite um número inteiro: ");
    int x;
    scanf("%d", &x);

    printf("Fatorial: %d\n", fatorial(x));
    return 0;
}