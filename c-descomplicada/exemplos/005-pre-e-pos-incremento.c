#include <stdio.h>
#include <stdlib.h>

int main() {
    char x = 10, y = 10;
    printf("x = %d, y = %d\n", x, y);
    y = x++;
    printf("x = %d, y = %d\n", x, y);
    y = ++x;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}