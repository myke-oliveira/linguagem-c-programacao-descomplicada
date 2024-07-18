#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 833;
    float f1, f2 = 5.25;
    f1 = x;
    printf("f1 = %f\n", f1);
    x = f2;
    printf("x = %d\n", x);
    getchar();
    return 0;
}