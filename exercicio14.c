#include <stdio.h>
#include <math.h>
/*Escreva um algoritmo que receba quinze números do usuário e armazene em um vetor a raiz quadrada de cada número. Caso o valor digitado seja menor que zero o número –1 deve ser atribuído ao elemento do vetor. Após isso, o algoritmo deve imprimir todos os valores armazenados.
*/
int main(){
    int numeros[15];
    int contador;

    for(contador = 0; contador < 15; contador ++){
        printf("Insira um valor: ");
        scanf("%i", &numeros[contador]);
    }
    
    for(contador = 0; contador <15; contador++){
        if (numeros[contador] < 0){
           numeros[contador] = -1;
        }else{
            numeros[contador] = sqrt(numeros[contador]); 
        }
    }
    for(contador = 0; contador < 15; contador ++){
       printf("%i", numeros[contador]);
       }
    

    return 0;
}