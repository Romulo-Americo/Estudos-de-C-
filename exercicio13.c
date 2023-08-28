#include <stdio.h>
/*Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o cubo de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
int main(){
    int numeros[10];
    int contador;
    int valores;
    int cubo;
    for(contador = 0; contador < 10; contador ++){
        printf("Insira um valor: ");
        scanf("%i", &valores);
        cubo = valores * 3;
        numeros[contador] = cubo;
    }
    for(contador = 0; contador < 10; contador ++){
       printf("%i", numeros[contador] = cubo);
    }
    

    return 0;
}