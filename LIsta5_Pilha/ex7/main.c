#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criar();
    Elem elem;
    int opcao;

    do {
        printf("\n1 - Visitar pagina\n");
        printf("2 - Voltar\n");
        printf("3 - Pagina atual\n");
        printf("4 - Historico\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("Visitar: ");
            fgets(elem.value, 100, stdin);
            elem.value[strcspn(elem.value, "\n")] = '\0';
            push(pilha, elem);
        }

        else if (opcao == 2) {
            if (size(pilha) <= 1) {
                printf("Nao e possivel voltar.\n");
            } else {
                pop(pilha);
                top(pilha);
            }
        }

        else if (opcao == 3) {
            if (empty(pilha))
                printf("Nenhuma pagina visitada.\n");
            else
                top(pilha);
        }

        else if (opcao == 4) {
            if (empty(pilha))
                printf("Historico vazio.\n");
            else
                print(pilha);
        }

    } while (opcao != 5);

    clear(pilha);
    free(pilha);

    return 0;
}