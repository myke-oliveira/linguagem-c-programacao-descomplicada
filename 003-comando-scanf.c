#include <stdio.h>
#include <stdlib.h>

int main() {
    int nro;
    float f;

    printf("Digite dois números, um inteiro e um real: ");
    scanf("%d%f", &nro, &f);
    printf("Numeros: %d e %f\n", nro, f);
    
    return 0;
}