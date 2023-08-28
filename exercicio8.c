#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor os 100 primeiros números ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/

int main() {
    int numerosImpares[100];
    int contador = 0;
    int numero = 1;
    while (contador < 100) {
        numerosImpares[contador] = numero;
        numero += 2;
        contador++;
    }

    printf("Os 100 primeiros números ímpares:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", numerosImpares[i]);
    }
    printf("\n");

    return 0;
}