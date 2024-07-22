#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite dois valores inteiros: ");

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        printf("%d\n", i);
    }

    printf("Fim do programa\n");
    return 0;
}