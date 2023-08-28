#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor todos os números pares do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeroMulti[50];
    int contador = 1;
    int i = 0;

    for(contador; contador <= 100; contador ++){
        if (contador % 2 == 0 ){
            numeroMulti[i] = contador;
            contador ++;
            printf("%d \n", numeroMulti[i]);
        }
    }
}