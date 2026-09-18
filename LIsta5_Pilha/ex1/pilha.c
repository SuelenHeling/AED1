#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
    Elem elem;
    struct no *prox;
} No;

struct pilha {
    No *topo;
    int quantidade;
};

void reset(Pilha *pilha) {
    pilha->topo = NULL;
    pilha->quantidade = 0;
}

int empty(Pilha *pilha) {
    return pilha->quantidade == 0;
}

int size(Pilha *pilha) {
    return pilha->quantidade;
}

void push(Pilha *pilha, Elem elem) {
    No *novo = malloc(sizeof(No));

    novo->elem = elem;
    novo->prox = pilha->topo;
    pilha->topo = novo;
    pilha->quantidade++;
}

Elem pop(Pilha *pilha) {
    No *aux;
    Elem elem;

    elem = pilha->topo->elem;
    aux = pilha->topo;
    pilha->topo = pilha->topo->prox;

    free(aux);
    pilha->quantidade--;

    return elem;
}

void top(Pilha *pilha) {
    if (empty(pilha)) {
        printf("Pilha vazia\n");
    } else {
        printf("Topo: %.2f\n", pilha->topo->elem.value);
    }
}

void clear(Pilha *pilha) {
    while (!empty(pilha)) {
        pop(pilha);
    }
}

void print(Pilha *pilha) {
    No *aux = pilha->topo;

    while (aux != NULL) {
        printf("%.2f ", aux->elem.value);
        aux = aux->prox;
    }

    printf("\n");
}