#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;
    char texto[100];
    int i;

    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("%s\n", texto);

    for (i = 0; texto[i] != '\0'; i++) {
        elem.value = texto[i];
        push(pilha, elem);
    }

    while (!empty(pilha)) {
        elem = pop(pilha);
        printf("%c", (char)elem.value);
    }

    printf("\n");

    free(pilha);

    return 0;
}