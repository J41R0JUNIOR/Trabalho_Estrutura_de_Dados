typedef struct No{
    int valor;
    struct No* no_esquerda;
    struct No* no_direita;
} No;

No* ab_no(int valor);
void ab_inserir_no(No** raiz, int valor);
No* ab_remover_no(No* raiz, int valor);
void ab_imprimir_em_ordem(No* raiz);
bool ab_busca_no(No* raiz, int valor);


// Inserção
// Remoção
// Busca
// Percursos (percorrer a árvore em Inorder, preorder, postorder)
// Mínimo e Máximo 

