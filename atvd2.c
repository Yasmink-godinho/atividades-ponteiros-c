#include <stdio.h>

void aplicar_desconto(float *ptr_preco, float percentual_desconto) {

    *ptr_preco = *ptr_preco - (*ptr_preco * ( percentual_desconto / 100.0)); 
}

int main() {
    float preco = 100.0;
    float desconto = 10.0; 
  

    printf("Valor antes do desconto: %.2f\n", preco);

    aplicar_desconto(&preco, desconto);

    printf("Valor apos o desconto de %.0f%%: %.2f\n", desconto, preco);

    return 0;
}