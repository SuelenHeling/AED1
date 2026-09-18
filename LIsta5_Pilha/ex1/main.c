#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *pilha = malloc(sizeof(Pilha));
    Elem elem;

    reset(pilha);

    elem.value = 10;
    push(pilha, elem);

    elem.value = 20;
    push(pilha, elem);

    elem.value = 30;
    push(pilha, elem);

    printf("Pilha: ");
    print(pilha);

    printf("Tamanho: %d\n", size(pilha));

    top(pilha);

    elem = pop(pilha);
    printf("Removido: %.2f\n", elem.value);

    printf("Pilha: ");
    print(pilha);

    clear(pilha);

    printf("Tamanho depois do clear: %d\n", size(pilha));

    free(pilha);

    return 0;
}