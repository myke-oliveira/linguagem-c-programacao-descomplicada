#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 833;
    float f1, f2 = 5.25;
    f1 = x;
    printf("f1 = %f\n", f1);
    x = f2;
    printf("x = %d\n", x);
    
    float f = 97.3;
    char ch1, ch2 = 'A';
    ch1 = f;
    printf("ch1 = %c\n", ch1);
    f = ch2;
    printf("f = %f\n", f);
    
    getchar();
    return 0;
}