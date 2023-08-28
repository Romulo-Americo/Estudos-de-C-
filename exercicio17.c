#include <stdio.h>
/*Construa um algoritmo para calcular a média de valores PARES e ÍMPARES, de 50 números que serão digitados pelo usuário. Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar também o maior número PAR digitado e o menor número ÍMPAR digitado. Esses dados devem ser armazenados em um vetor. Além disso, devem ser impressos os valores PARES maiores que a média PAR, bem como os valores ÍMPARES menor que a média ÍMPAR.*/

int main(){
    int numeroPar[5];
    int numeroImpar[5];
    int contador = 0;
    int condicao;
    int contPar = 0;
    int contImpar = 0;
    int somaPar = 0;
    int somaImpar = 0;
    int maiorPar;
    int menorImpar;
    for(contador; contador < 5; contador++){
        printf("Informe o numero:\n");
        scanf("%i", &condicao);
        if (condicao % 2 == 0){
            numeroPar[contador] = condicao;
            somaPar += numeroPar[contador];
            contPar ++;
            
        }else{
            numeroImpar[contador] = condicao;
            somaImpar += numeroImpar[contador];
            contImpar ++;
        }
    }

    int mediaPar = somaPar / contPar;
    int mediaImpar = somaImpar / contImpar;
    printf("A media dos numeros pares: %i \nA media dos numeros impares: %i", mediaPar, mediaImpar);

    maiorPar = numeroPar[0];
    for(contador = 1; contador < contPar; contador ++){
        if(numeroPar[contador] > maiorPar){
            maiorPar = numeroPar[contador];
        }
    }
    menorImpar = numeroImpar[0];
    for (contador = 1; contador < contImpar; contador++){
        if (numeroImpar[contador] < menorImpar){
            menorImpar = numeroImpar[contador];
        }
    }
    printf("\nO maior numero par:%i \n O menor numero impar: %i", maiorPar, menorImpar);

    for(int acimaMedia = 0; acimaMedia < contPar; acimaMedia ++){
        if(numeroPar[acimaMedia] > mediaPar){
            printf("\nValores pares acima da media: %i", numeroPar[acimaMedia]);
        }
    }
    for(int menorMedia = 0; menorMedia < contPar; menorMedia ++){
        if(numeroPar[menorMedia] > mediaPar){
            printf("\nValores impares abaixo da media: %i", numeroImpar[menorMedia]);
        }
    }
    return 0;
}