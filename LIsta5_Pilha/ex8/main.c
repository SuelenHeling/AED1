#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;
    char expressao[200];
    char operador;
    float a, b, resultado;
    int i;

    fgets(expressao, 200, stdin);

    for (i = 0; expressao[i] != '\0'; i++) {

        if (expressao[i] >= '0' && expressao[i] <= '9') {
            elem.value = expressao[i] - '0';
            push(pilha, elem);
        }

        else if (expressao[i] == '+' || expressao[i] == '-' ||
                 expressao[i] == '*' || expressao[i] == '/') {

            operador = expressao[i];

            b = pop(pilha).value;
            a = pop(pilha).value;

            if (operador == '+')
                resultado = a + b;

            if (operador == '-')
                resultado = a - b;

            if (operador == '*')
                resultado = a * b;

            if (operador == '/')
                resultado = a / b;

            elem.value = resultado;
            push(pilha, elem);
        }
    }

    resultado = pop(pilha).value;

    printf("%.0f\n", resultado);

    free(pilha);

    return 0;
}