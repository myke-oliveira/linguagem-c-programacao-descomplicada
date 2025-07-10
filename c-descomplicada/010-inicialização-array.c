#include <stdlib.h>
#include <stdio.h>

int main() {
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int matrix[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}