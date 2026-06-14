#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void imprimir_produtos (Produto *ptr_produto, int quantidade_itens) {

    for (int i = 0; i < quantidade_itens; i++) {
        printf("Produto %d -> ID: %d | Preco: R$ %.2f\n", i + 1, (ptr_produto + i)->id, (ptr_produto + i)->preco);
    }
}

int main() {
    Produto estoque[3] = {
        {1, 100.0},
        {2, 154.20},
        {3, 250.90}
    };
   
    imprimir_produtos(estoque, 3);

    return 0;
}