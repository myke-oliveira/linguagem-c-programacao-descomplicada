#include <stdio.h>
#include <stdlib.h>

int main() {
    char integer1 = 127;

    printf("Exemplo de overflow... com char...\n");
    char result = integer1 + 1;
    printf("%d + %d = %d\n", integer1, 1, result);

    integer1 = 65;
    result = 2 * integer1;
    printf("%d * %d = %d\n", integer1, 2, result);
    return 0;
}