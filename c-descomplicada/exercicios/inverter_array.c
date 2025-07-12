#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o tamanho do array: ");
    int tamanho;
    scanf("%d", &tamanho);

    if (tamanho <= 0)
    {
        printf("Por favor, digite um tamanho válido maior que zero.\n");
        return 1; // Retorna um código de erro
    }

    int *array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL)
    {
        printf("Erro ao alocar memória. Verifique se há espaço suficiente.\n");
        return 1; // Retorna um código de erro
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array original:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array invertido:\n");
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}