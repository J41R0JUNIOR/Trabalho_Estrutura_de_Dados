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

void ab_percurso_inordem(No* raiz);
void ab_percurso_preordem(No* raiz);
void ab_percurso_posordem(No* raiz);

int ab_valor_minimo(No* raiz);
int ab_valor_maximo(No* raiz);

void ab_liberar_arvore(No* raiz);

// Inserção
// Remoção
// Busca
// Percursos (percorrer a árvore em Inorder, preorder, postorder)
// Mínimo e Máximo 
// Liberar memória

