#include <stdlib.h>
#include <stdio.h>

int main() {
    char word[10], word1[10], phrase[255];

    printf("Digite uma palavra: ");
    scanf("%s", word);
    
    char c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite uma frase: ");
    fgets(phrase, 255, stdin);

    printf("Palavra digitada: %s\n", word);
    printf("Frase digitada: %s\n", phrase);

    return 0;
}