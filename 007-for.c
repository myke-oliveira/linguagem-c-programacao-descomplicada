#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        printf("%d\n", i);
    }

    printf("Fim do programa\n");
    return 0;
}