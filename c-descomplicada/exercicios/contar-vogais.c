#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int contarVogais(const char *texto);

int main()
{
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    int vogais = contarVogais(texto);
    printf("Número de vogais: %d\n", vogais);

    return 0;
}

int contarVogais(const char *texto)
{
    int i = 0;
    int contagem = 0;
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    while (texto[i] != '\0')
    {
        for (int j = 0; j < 10; j++)
        {
            if (texto[i] == vogais[j])
            {
                contagem++;
            }
        }
        i++;
    }

    return contagem;
}