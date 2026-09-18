#ifndef FILA_H
#define FILA_H

typedef struct {
    char value;
} Elem;

typedef struct fila Fila;

Fila *criar();
void reset(Fila *fila);
int empty(Fila *fila);
int size(Fila *fila);
void enqueue(Fila *fila, Elem elem);
Elem dequeue(Fila *fila);
void clear(Fila *fila);

#endif