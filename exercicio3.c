#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 1 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeroInteiro[101];
    int contador = 100;
    

    for(contador; contador > 0; contador --){
        numeroInteiro[contador] = contador;
        printf("%i \n", numeroInteiro[contador]);
    }
    return 0;
}

