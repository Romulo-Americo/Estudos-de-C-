#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 1 a 20. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main() {
    int numerosImparesQuadrados[10];
    int contador = 0;

    for (int numero = 1; numero <= 20; numero++) {
        if (numero % 2 != 0) { 
            numerosImparesQuadrados[contador] = numero * numero;
            contador++;
        }
    }
    printf("Quadrados dos números ímpares de 1 a 20:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numerosImparesQuadrados[i]);
    }
    printf("\n");

    return 0;
}
