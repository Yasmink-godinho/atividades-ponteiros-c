#include <stdio.h>

int main() {
    float preco = 100.0;
    float *ptr_preco = &preco;

    printf("Valor do preco: %.2f\n", preco);

    *ptr_preco =  *ptr_preco * 1.10; 

    printf("Valor do preco apos aumento: %.2f\n", preco);

    return 0;
}