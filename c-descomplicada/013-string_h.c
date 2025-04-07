#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char phrase[] = "The cat jumped over the moon!!!";

    printf("A frase: %s\n", phrase);
    printf("Tamanho %d\n", strlen(phrase));

    char target[255];
    strcpy(target, phrase);
    printf(target);
    printf("\n");

    char bom[10] = "Bom ", dia[] = "dia!!!\n";
    strcat(bom, dia);
    printf(bom);

    char linguagem1[] = "lingaguem c", linguagem2[] = "Linguagem C";

    if (strcmp(linguagem1, linguagem2) == 0) {
        printf("\"%s\" e \"%s\" são iguais!!!\n", linguagem1, linguagem2);
    } else {
        printf("\"%s\" e \"%s\" são diferentes!!!\n", linguagem1, linguagem2);
    }
    return 0;
}