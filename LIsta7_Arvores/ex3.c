#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {
    No *novo = (No*) malloc(sizeof(No));

    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

int maiorElemento(No *raiz) {
    if (raiz == NULL)
        return -1;

    int maior = raiz->valor;

    int esquerda = maiorElemento(raiz->esquerda);
    int direita = maiorElemento(raiz->direita);

    if (esquerda > maior)
        maior = esquerda;

    if (direita > maior)
        maior = direita;

    return maior;
}

int main() {
    No *raiz = criarNo(10);

    raiz->esquerda = criarNo(5);
    raiz->direita = criarNo(15);

    raiz->esquerda->esquerda = criarNo(2);
    raiz->esquerda->direita = criarNo(7);

    raiz->direita->esquerda = criarNo(12);
    raiz->direita->direita = criarNo(20);

    printf("Maior elemento: %d\n", maiorElemento(raiz));

    return 0;
}
