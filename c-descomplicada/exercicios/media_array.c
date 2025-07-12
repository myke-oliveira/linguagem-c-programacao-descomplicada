#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o tamanho do array: ");
    int tamanho;
    scanf("%d", &tamanho);

    if (tamanho <= 0)
    {
        printf("Tamanho inválido. O tamanho deve ser maior que zero.\n");
        return 1;
    }

    int *array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: %d\n", i + 1, array[i]);
        soma += array[i];
    }

    float media = (float)soma / tamanho;
    printf("A média dos elementos do array é: %.2f\n", media);

    free(array);
    printf("Memória alocada foi liberada.\n");
    printf("Fim do programa.\n");

    return 0;
}