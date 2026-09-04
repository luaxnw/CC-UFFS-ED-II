# Merge Sort
- Algoritmo de ordenção de utiliza a abordagem divisão e conquista.
- Divisão do problema em determinado número de subproblemas menores que o original
- Conquista os subproblemas, resolvendo-os recursivamente.
- Combina (merge) as soluções dadas aos subproblemas para o problema original.


Recursão extingue-se quando a sequência a ser arranjada tiver comprimento 1, visto que nesse caso não há nenhum trabalho a ser feito, já que toda sequência de comprimento 1 já é ordenada.
A operação chave para o merge sort é a intercalação de dois arranjos ordenados, que está no passo de combinação. Para tal chamamos a função merge(int *vet, int p, int q, int r).
- *vet é um ponteiro para o primeiro elemento do arranjo
- p, q, r são índices dentro do vetor vet:
    vet = [2,5,8,1,3,7]
    p = índice 0 (valor 2);
    q = índice 2 (valor 1);
    r = índice 5 (valor 7);
    
    vet[p ... q] = [2,5,8] - primeira metades
    vet[q + 1 ... r] = [1,3,7] - segunda metade
    
## Resumindo:
p -> início da primeira metade
q -> final da primeira metade e onde ocorre a divisão
q -> final da segunda metade

esse procedimento considera que os subarranjos vet[p ... q] e vet[q+1 ... r] estão em sequência ordenada. Ele mescla para formar um único subarranjo ordenado que substitui subarranjo atual vet[p ... q].
O procedimento merge leva tempo O(n), onde n = r - p + 1 é o númerro total de elementos que estão sendo intercalados.
O procedimento consiste em comparar os menores elementos de cada subarranjo, nesse caso primeira e segunda metade, e encontrar o menor e inserir o menor no arranjo ordenado de saída. Repetimos o processo até que o arranjo de entrada estiver vazio. Demanda tempo constante de O(n) pois estamos apenas comparando dois elementos.

## Análise de complexidade por etapas
- divisão: simplesmente calcula o ponto médio do subarranjo, sendo um tempo constante de O(1) -> D(n) = O(1)
- conquista: resolve recursivamente dois subproblemas, cada um de tamanho n/2, portanto definimos como 2t(n/2)
- mesclar: o procedimento merge em um subarranjo de n elementos leva tempo O(n) -> C(n) = O(n)

quando somamos as funções D(n) e C(n), estamos somando O(n) com O(1). Essa soma é uma função linear de n, ou seja, O(n).
A adição dessa função ao termo 2t(n/2) da etapa de conquista fornece o tempo do pior caso T(n).

T(n) = 
{
    O(1) se n = 1
    2T(n/2) + O(n) se n > 1
}

podemos reescrever T(n) como:
T(n) = 
{
    c se n = 1
    2T(n/2) + cn se n > 1
}

Imaginemos o proedimento do algoritmo como uma árvore:
             [10,2,5,3,20,9]   n = 6  (nível 0)
                /     \
          [10,2,5]    [3,20,9]          cn/2 em todos os subarranjos e tem dois subarranjos, portanto cn/2 * 2(nível 1)
            /  \       /  \
           [10]  [2,5]   [3]  [20,9]     cn/4 em todos os subarranjos e tem dois subarranjos 4, portanto cn/4 * 4(nível 2)
          /       / \   /   / \
         10       2  5  3   20  9        c para cada valor, como tem n valores (6), é cn (nível 3)

- perceba que cada "rodada" da recursão gera um nível da árvore, ou seja, cada fez que a função é chamada, uma linha nova
- na árvore surge, fazendo isso até que cada nó (subarranjo) tenha no máximo 1 elemento
- perceba que o número de nós em cada nível é aproximadamente dado por 2^nivel. exemplo, no nível 1 há 2 nós pois 2¹ = 2; no nível 2 há 4 nós, pois 2² = 4
- perceba que para cada nível novo da árvore, 