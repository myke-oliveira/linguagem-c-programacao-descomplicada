#include <stdio.h>
#include <stdlib.h>

int main() {
    const int QTD_ROWS = 5, QTD_COLUMNS = 5;
    float matrix[QTD_ROWS][QTD_COLUMNS];

    for (int i = 0; i < QTD_ROWS; i++) {
        for (int j = 0; j < QTD_COLUMNS; j++) {
            matrix[i][j] = rand();
            printf("A[%d, %d] = %f\n", i, j, matrix[i][j]);
        }
    }
    return 0;
}