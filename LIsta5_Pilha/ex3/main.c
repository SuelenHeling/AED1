#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;
    char palavra[100];
    int i;
    int igual = 1;

    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        elem.value = palavra[i];
        push(pilha, elem);
    }

    for (i = 0; palavra[i] != '\0'; i++) {
        elem = pop(pilha);

        if (palavra[i] != (char)elem.value) {
            igual = 0;
            break;
        }
    }

    if (igual)
        printf("palindromo\n");
    else
        printf("nao e palindromo\n");

    free(pilha);

    return 0;
}