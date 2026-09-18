#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;
    char expressao[200];
    int i;
    int correto = 1;

    printf("Digite a expressao matematica: ");
    fgets(expressao, 200, stdin);

    for (i = 0; expressao[i] != '\0'; i++) {

        if (expressao[i] == '(' || expressao[i] == '[' || expressao[i] == '{') {
            elem.value = expressao[i];
            push(pilha, elem);
        }

        if (expressao[i] == ')' || expressao[i] == ']' || expressao[i] == '}') {

            if (empty(pilha)) {
                correto = 0;
                break;
            }

            elem = pop(pilha);

            if (expressao[i] == ')' && (char)elem.value != '(')
                correto = 0;

            if (expressao[i] == ']' && (char)elem.value != '[')
                correto = 0;

            if (expressao[i] == '}' && (char)elem.value != '{')
                correto = 0;

            if (!correto)
                break;
        }
    }

    if (!empty(pilha))
        correto = 0;

    if (correto)
        printf("A expressao esta corretamente balanceada.\n");
    else
        printf("A expressao nao esta corretamente balanceada.\n");

    clear(pilha);
    free(pilha);

    return 0;
}