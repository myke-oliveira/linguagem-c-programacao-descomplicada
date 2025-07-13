#include <stdlib.h>
#include <stdio.h>

void imprimeMatriz(int m[][3], int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[10][3];

    printf("Digite os elementos da matriz (%d linhas e 3 colunas):\n", 10);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    imprimeMatriz(matriz, 10);
    printf("Matriz impressa com sucesso.\n");
    printf("Fim do programa.\n");
    return 0;
}