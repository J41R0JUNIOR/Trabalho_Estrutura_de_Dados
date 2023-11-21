#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arvore.h"

No* ab_no(int valor){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->no_esquerda = NULL;
    no->no_direita = NULL;
    return no;
}

void ab_inserir_no(No** raiz, int valor){

    if(*raiz == NULL){
        *raiz = ab_no(valor);
    }
    else{
        if((*raiz)->valor >= valor){
            ab_inserir_no(&(*raiz)->no_esquerda, valor);
        }
        else if((*raiz)->valor < valor){
            ab_inserir_no(&(*raiz)->no_direita, valor);
        }
    }
}

No* ab_encontrar_minimo(No* raiz) {
    while (raiz->no_esquerda != NULL) {
        raiz = raiz->no_esquerda;
    }
    return raiz;
}

No* ab_remover_no(No* raiz, int valor) {
    if (raiz == NULL) {
        return raiz;
    }

    if (valor < raiz->valor) {
        raiz->no_esquerda = ab_remover_no(raiz->no_esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->no_direita = ab_remover_no(raiz->no_direita, valor);
    } else {
        if (raiz->no_esquerda == NULL) {
            No* temp = raiz->no_direita;
            free(raiz);
            return temp;
        } else if (raiz->no_direita == NULL) {
            No* temp = raiz->no_esquerda;
            free(raiz);
            return temp;
        }

        No* temp = ab_encontrar_minimo(raiz->no_direita);
        raiz->valor = temp->valor;
        raiz->no_direita = ab_remover_no(raiz->no_direita, temp->valor);
    }
    return raiz;
}

void ab_imprimir_em_ordem(No* raiz){
    if(raiz != NULL){
        ab_imprimir_em_ordem(raiz->no_esquerda);
        printf("%d ", raiz->valor);
        ab_imprimir_em_ordem(raiz->no_direita);
    }
}



bool ab_busca_no(No* raiz, int valor) {
    if (raiz == NULL) {
        return false;
    }

    if (valor == raiz->valor) {
        return true;
    } else if (valor < raiz->valor) {
        return ab_busca_no(raiz->no_esquerda, valor);
    } else {
        return ab_busca_no(raiz->no_direita, valor);
    }
}
