#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor todos os números ímpares do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main() {
    int numerosImpares[50]; 
    int contador = 0;

    for (int numero = 1; numero <= 100; numero++) {
        if (numero % 2 != 0){ 
            numerosImpares[contador] = numero;
            contador++;
        }
    }
 
    for (int i = 0; i < contador; i++) {
        printf("%d\n", numerosImpares[i]);
    }
  

    return 0;
}
