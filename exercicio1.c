#include <stdio.h>
/*Desenvolva os algoritmos abaixo, utilizando a estrutura ministrada em sala de aula.
a) Escreva um algoritmo que armazene em um vetor todos os números inteiros de 0 a 50. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeroInteiro[50];
    int contador = 0;
    

    for(contador; contador < 51; contador ++){
        /*Vetor*/numeroInteiro[contador/*posição*/] = contador/*valor que vaiser atribuido na posição*/;
        printf("%i \n", numeroInteiro[contador]);
    }
    return 0;
}

