#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor todos os números inteiros do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numero[101];
    int contador = 1;
    for(contador; contador < 101; contador ++){
        numero[contador] = contador;
        printf("%i \n", numero[contador]);
    }
    return 0;
}
