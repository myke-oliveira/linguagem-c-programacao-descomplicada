#include <stdlib.h>
#include <stdio.h>

int main() {
    int lista[13] = {1, 4, 7, 5, 6, 7, 2, 4, 3 ,6, 7, 8, 9};

    int maior = lista[0];
    for (int i = 1; i < 13; i++) {
        if (maior < lista[i]) {
            maior = lista[i];
        }
    }

    printf("Maior: %d\n", maior);
    return 0;
}