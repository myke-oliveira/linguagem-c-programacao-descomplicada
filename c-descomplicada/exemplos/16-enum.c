#include <stdio.h>
#include <stdlib.h>

enum semana
{
    Domingo,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main()
{
    enum semana s;

    printf("Tamanho de enum semana: %zu\n", sizeof(s));
    printf("Domingo: %d\n", Domingo);
    printf("Segunda: %d\n", Segunda);
    printf("Terca: %d\n", Terca);
    printf("Quarta: %d\n", Quarta);
    printf("Quinta: %d\n", Quinta);
    printf("Sexta: %d\n", Sexta);
    printf("Sabado: %d\n", Sabado);

    s = Segunda;
    printf("Valor de s: %d\n", s);

    return 0;
}