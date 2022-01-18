#include <stdlib.h>
#include <stdio.h>

int Soma() {
    int SOMA = 0, INDICE = 13, K = 0;

    do{
        K += 1;
        SOMA += K;
    }while(K < INDICE);
    return SOMA;
}

int main(void) {
    int valorSoma = Soma();
    printf("Soma = %d", valorSoma);

    return 0;
}