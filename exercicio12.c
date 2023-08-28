#include <stdio.h>
/*Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o quadrado de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
int main(){
    int numeros[10];
    int contador;
    int valores;
    int quadrado;
    for(contador = 0; contador < 10; contador ++){
        printf("Insira um valor: ");
        scanf("%i", &valores);
        quadrado = valores * 2;
        numeros[contador] = quadrado;
    }
    for(contador = 0; contador < 10; contador ++){
       printf("%i", numeros[contador] = quadrado);
    }
    

    return 0;
}