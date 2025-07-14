#include <stdlib.h>
#include <stdio.h>

int fibonacci(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }

    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    printf("Digite um número: ");
    int x;
    scanf("%d", &x);

    printf("Fibonacci %d: %d\n", x, fibonacci(x));
    return 0;
}