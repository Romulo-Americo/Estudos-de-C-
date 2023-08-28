#include <stdio.h>
/* Escreva um algoritmo que armazene em um vetor todos os números múltiplos de 5, no intervalo fechado de 1 a 500. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeroMulti[100];
    int contador = 1;
    int i = 0;

    for(contador; contador <= 500; contador ++){
        if (contador % 5 == 0 ){
            numeroMulti[i] = contador;
            contador ++;
            printf("%d \n", numeroMulti[i]);
        }
    }
}