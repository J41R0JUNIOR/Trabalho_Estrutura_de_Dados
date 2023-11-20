#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){

    No* raiz = NULL;
    ab_inserir_no(&raiz, 2);
    ab_inserir_no(&raiz, 7);
    ab_inserir_no(&raiz, 5);
    ab_inserir_no(&raiz, 1);

    ab_imprimir_em_ordem(raiz);

    ab_remover_no(raiz, 1);

    ab_imprimir_em_ordem(raiz);


    return 0;
}