#include <stdio.h>
/*Escreva um algoritmo que receba dez números do usuário e armazene em um vetor a metade de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeros[10];
    int contador;
    int valores;
    float metade;
    for(contador = 0; contador < 10; contador ++){
        printf("Insira um valor: ");
        scanf("%i", &valores);
        metade = valores /2;
        numeros[contador] = metade;
    }
    for(contador = 0; contador < 10; contador ++){
       printf("%2.f", numeros[contador] = metade);
    }
    

    return 0;
}