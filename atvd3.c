#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *ptr_produto, float percentual_desconto) {

    ptr_produto->preco = ptr_produto->preco - (ptr_produto->preco * (percentual_desconto / 100.0));
}

int main() {
    Produto produto = {1,100.0};
    float desconto = 10.0; 
    
    printf("Valor antes do desconto: %.2f\n", produto.preco);

    aplicar_desconto(&produto, desconto);

    printf("Produto ID %d com desconto de %.0f%%: %.2f\n", produto.id, desconto, produto.preco);

    return 0;
}