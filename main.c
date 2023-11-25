#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arvore.h"

int main(){

    No* raiz = NULL;
    ab_inserir_no(&raiz, 2);
    ab_inserir_no(&raiz, 7);
    ab_inserir_no(&raiz, 5);
    ab_inserir_no(&raiz, 1);

    ab_imprimir_em_ordem(raiz);

    ab_remover_no(raiz, 1);
    printf("\n");
    ab_imprimir_em_ordem(raiz);
    printf("\n");

    int valor = 2;
    if (ab_busca_no(raiz, valor)) {
        printf("O noh com valor %d foi encontrado na arvore.\n", valor);
    } else {
        printf("O noh com valor %d não foi encontrado na arvore.\n", valor);
    }

    printf("Inordem: ");
    ab_percurso_inordem(raiz);
    printf("\n");

    printf("Preordem: ");
    ab_percurso_preordem(raiz);
    printf("\n");

    printf("Posordem: ");
    ab_percurso_posordem(raiz);
    printf("\n");

    int minimo = ab_valor_minimo(raiz);
    int maximo = ab_valor_maximo(raiz);

    printf("Valor minimo: %d\n", minimo);
    printf("Valor maximo: %d\n", maximo);

    ab_liberar_arvore(raiz);

    return 0;
}