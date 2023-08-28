#include <stdio.h>
/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 200 a 100 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeroInteiro[101];
    int contador = 200;
    

    for(contador; contador >= 100; contador --){
        numeroInteiro[contador] = contador;
        printf("%i \n", numeroInteiro[contador]);
    }
    return 0;
}

