#include <stdio.h>
#include <stdlib.h>

union tipoU
{
    short int x;
    unsigned char c;
};

struct tipoS
{
    short int x;
    unsigned char c;
};

int main()
{
    struct tipoS s;
    union tipoU u;

    printf("Tamanho de tipoU: %zu\n", sizeof(u));
    printf("Tamanho de tipoS: %zu\n", sizeof(s));

    u.x = 5;
    u.c = 'a';

    printf("u.x: %d\n", u.x);
    printf("u.c: %c\n", u.c);

    return 0;
}