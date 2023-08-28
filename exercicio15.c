#include <stdio.h>
/* Escreva um algoritmo que receba a altura de 10 atletas. Esse algoritmo deve imprimir a altura daqueles atletas que tem altura maior que a média.
*/
int main(){
    float alturaAtleta[10];
    int contador;
    int soma = 0;

    for (contador = 0; contador < 10; contador ++){
        printf("Informe a sua altura: ");
        scanf("%f", &alturaAtleta[contador]);
        soma += alturaAtleta[contador];

    }
    float media = soma / 10;

    for(int cont = 0; cont < 10; cont ++){
        if(alturaAtleta[cont] > media){
            printf("Atletas acima da media: %.2f\n", alturaAtleta[cont]);
        }
    }  
    return 0;  
}