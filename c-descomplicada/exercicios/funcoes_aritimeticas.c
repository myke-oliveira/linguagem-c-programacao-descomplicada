#include <stdlib.h>
#include <stdio.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b); // cuidado com divisão por zero!

int main()
{
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);

    char operacao;
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case '+':
        int resultadoSoma = somar(a, b);
        printf("Resultado: %d\n", resultadoSoma);
        break;

    case '-':
        int resultadoSubtrair = subtrair(a, b);
        printf("Resultado: %d\n", resultadoSubtrair);
        break;

    case '*':
        int resultadoMultiplicar = multiplicar(a, b);
        printf("Resultado: %d\n", resultadoMultiplicar);
        break;

    case '/':
        float resultadoDivisao = dividir(a, b);
        printf("Resultado: %.2f\n", resultadoDivisao);
        break;

    default:
        fprintf(stderr, "Operação inválida.\n");
        return 1;
    }

    return 0;
}

int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Erro: Divisão por zero.\n");
        exit(EXIT_FAILURE);
    }
    return (float)a / b;
}