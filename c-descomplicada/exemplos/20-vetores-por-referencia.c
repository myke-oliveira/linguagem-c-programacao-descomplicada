#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
}

int main()
{
    printf("Digite o tamanho do vetor: ");
    int n;
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor: ");
    imprimeMatriz(vetor, n);

    free(vetor);
    return 0;
}