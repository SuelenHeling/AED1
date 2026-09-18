#include <stdlib.h>
#include "fila.h"

typedef struct no {
    Elem elem;
    struct no *prox;
} No;

struct fila {
    No *inicio;
    No *fim;
    int quantidade;
};

Fila *criar() {
    Fila *fila = malloc(sizeof(Fila));
    reset(fila);
    return fila;
}

void reset(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->quantidade = 0;
}

int empty(Fila *fila) {
    return fila->quantidade == 0;
}

int size(Fila *fila) {
    return fila->quantidade;
}

void enqueue(Fila *fila, Elem elem) {
    No *novo = malloc(sizeof(No));

    novo->elem = elem;
    novo->prox = NULL;

    if (empty(fila)) {
        fila->inicio = novo;
        fila->fim = novo;
    } else {
        fila->fim->prox = novo;
        fila->fim = novo;
    }

    fila->quantidade++;
}

Elem dequeue(Fila *fila) {
    No *aux;
    Elem elem;

    aux = fila->inicio;
    elem = aux->elem;
    fila->inicio = aux->prox;

    if (fila->inicio == NULL)
        fila->fim = NULL;

    free(aux);
    fila->quantidade--;

    return elem;
}

void clear(Fila *fila) {
    while (!empty(fila))
        dequeue(fila);
}