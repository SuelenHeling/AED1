#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila *fila = criar();
    Elem elem;
    char texto[200];
    int i;

    fgets(texto, 200, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            elem.value = texto[i];
            enqueue(fila, elem);
        }
    }

    while (!empty(fila)) {
        elem = dequeue(fila);
        printf("%c", elem.value);
    }

    printf("\n");

    free(fila);

    return 0;
}