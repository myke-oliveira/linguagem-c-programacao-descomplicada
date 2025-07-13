#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void inverterString(char *texto);

int main()
{
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o caracter nova linha, capturado no final pelo fgets
    texto[strcspn(texto, "\n")] = '\0';

    inverterString(texto);

    printf("Texto invertido: %s", texto);
    return 0;
}

void inverterString(char *texto)
{
    int n = strlen(texto);

    for (int i = 0; i < n / 2; i++)
    {
        char temp = texto[i];
        texto[i] = texto[n - i - 1];
        texto[n - i - 1] = temp;
    }
}