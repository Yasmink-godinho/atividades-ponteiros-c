#include <stdio.h>
#include <stdlib.h>


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
    int quantidade_itens;

    printf("Digite a quantidade de produtos que voce deseja cadastrar: ");
    scanf("%d%*c", &quantidade_itens);

    if (quantidade_itens <= 0) {
        printf("Quantidade de produtos deve ser maior que zero.\n");
        return 1;
    }

    Produto *estoque = (Produto *)malloc(quantidade_itens * sizeof(Produto));

    if (estoque == NULL) {
        printf("Erro ao alocar memoria para os produtos.\n");
        return 1;
    }
   
for (int i = 0; i < quantidade_itens; i++) {
        printf("\nCadastro do produto %d\n", i + 1);

        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d%*c", &(estoque + i)->id);

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f%*c", &(estoque + i)->preco);
    }
    
    imprimir_produtos(estoque, quantidade_itens);
    free(estoque);
    estoque = NULL;

    printf("\nMemoria alocada para os produtos foi liberada.\n");

    return 0;
}
