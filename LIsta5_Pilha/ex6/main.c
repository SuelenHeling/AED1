#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;

    elem.value = 10;
    push(pilha, elem);

    elem.value = 20;
    push(pilha, elem);

    elem.value = 30;
    push(pilha, elem);

    elem.value = 20;
    push(pilha, elem);

    elem.value = 40;
    push(pilha, elem);

    elem.value = 20;
    push(pilha, elem);

    printf("Antes: ");
    print(pilha);

    remover(pilha, 20);

    printf("Depois: ");
    print(pilha);

    free(pilha);

    return 0;
}