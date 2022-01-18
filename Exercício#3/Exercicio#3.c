#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("-----------------------------------------\n");
    printf("        Exercício#3 - Soluções           \n");
    printf("-----------------------------------------\n");

    printf("\n a) 1, 3, 5, 7, 9"); //Aumenta de 2 em 2
    printf("\n b) 2, 4, 8, 16, 32, 64, 128"); // Aumenta multiplicando o número por 2
    printf("\n c) 0, 1, 4, 9, 16, 25, 36, 49"); // Aumenta somando os números ímpares
    printf("\n d) 4, 16, 36, 64, 100"); /* Aumenta somando a subtração do número a frente com o número anterior
                                        ou soma de 8 em 8 começando pelo 12, ou seja, 4+ 12 = 16 */
    printf("\n e) 1, 1, 2, 3, 5, 8, 13"); // Sequência de Fibonacci, ou seja, soma do número anterior com o atual gradativamente
    printf("\n f) Sem resposta"); // Não consegui pegar a lógica desse sozinho, mas já vi que é 200, pois começa com a letra D
}
