/*
Exercício 1: Inserção
Objetivo: Construir uma árvore binária de busca a partir de uma sequência de valores inseridos informados pelo usuário.

Especificação e Tarefas:

Na função main, declare e inicialize o ponteiro da raiz: node * root = NULL;.
Solicite ao usuário a entrada de valores inteiros (ou defina um vetor de testes como {53, 30, 14, 39, 72, 61, 84}).
Para cada valor a ser inserido:
Crie o novo nó invocando create(valor).
Atualize a raiz invocando root = insert(root, novo_no).
*/

/*
Exercício 2: Exibição dos Elementos da Árvore
Objetivo: Implementar funções para percorrer e exibir todos os elementos armazenados na árvore no modo In-Order.

Protótipos das Funções:

void print_inorder(node * root);   // Percurso Em-Ordem (In-Order)
Especificação das Funções: print_inorder (Em-Ordem):

Visita recursivamente a subárvore esquerda (root->left).
Imprime o valor do nó atual (root->data).
Visita recursivamente a subárvore direita (root->right).
Nota: Em uma BST, esta exibição mostra os elementos em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *left;
    struct node *right;
    int data;
} node;

node *create(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->data = data;
    return new_node;
}

node *insert(node *root, node *new_node)
{
    if (root == NULL)
    {
        return new_node;
    }
    else
    {
        if (root->data >= new_node->data)
        {
            root->left = insert(root->left, new_node);
        }
        else
        {
            root->right = insert(root->right, new_node);
        }
    }
    return root;
}

void print_inorder(node *root)
{
    if (root == NULL)
        return;

    print_inorder(root->left);
    printf("%d\n", root->data);
    print_inorder(root->right);
}

int main()
{

    node *root = NULL;

    int vet[] = {47, 32, 53, 46, 102, 85, 14};

    for (int i = 0; i < 7; i++)
    {
        node *new = create(vet[i]);
        root = insert(root, new);
    }

    print_inorder(root);

    return 0;
}