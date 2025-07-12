#include <stdio.h>
#include <stdlib.h>

enum escapes
{
    retrocesso = '\b',
    tabulacao = '\t',
    nova_linha = '\n',
    retorno_carro = '\r',
    aspas_simples = '\'',
    aspas_duplas = '\"',
    barra_invertida = '\\'
};

int main()
{
    enum escapes e = nova_linha;

    printf("Tamanho de enum escapes: %zu\n", sizeof(e));
    printf("Retrocesso: %c\n", retrocesso);
    printf("Tabulação: %c\n", tabulacao);
    printf("Nova linha: %c\n", nova_linha);
    printf("Retorno carro: %c\n", retorno_carro);
    printf("Aspas simples: %c\n", aspas_simples);
    printf("Aspas duplas: %c\n", aspas_duplas);
    printf("Barra invertida: %c\n", barra_invertida);
    printf("Valor de e (nova linha): %c\n", e);
    
}