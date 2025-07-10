#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco
{
    char rua[50];
    int numero;
};

struct pessoa
{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main()
{
    printf("Tamanho da struct endereco: %zu bytes\n", sizeof(struct endereco));
    printf("Tamanho da struct pessoa: %zu bytes\n", sizeof(struct pessoa));

    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 123;
    strcpy(p.nome, "João da Silva");

    return 0;
}