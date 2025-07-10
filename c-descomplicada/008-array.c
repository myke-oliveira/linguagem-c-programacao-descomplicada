#include <stdio.h>
#include <stdlib.h>

int main() {
    const char TAMANHO = 5;
    float score[TAMANHO];

    printf("Digite a nota dos alunos\n");
    printf("========================\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Aluno %d: ", i+1);
        scanf("%f", &score[i]);
    }

    float sum = 0;
    for (int i = 0; i < TAMANHO; i++) sum += score[i];

    float avg = sum / TAMANHO;

    printf("A média das notas dos alunos é %.1f\n", avg);

    return 0;
}