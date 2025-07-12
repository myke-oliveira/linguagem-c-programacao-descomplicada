#include <stdlib.h>
#include <stdio.h>

typedef int inteiro;
typedef float real;
typedef char caractere;

struct pessoa
{
    inteiro idade;
    real altura;
    caractere nome[50];
};

typedef struct pessoa Pessoa;

int main()
{
    int x = 10;
    inteiro y = 20;

    y = x + y;

    Pessoa myke = {25, 1.75, "Myke"};
    printf("Pessoa: %s, Idade: %d, Altura: %.2f\n", myke.nome, myke.idade, myke.altura);
}