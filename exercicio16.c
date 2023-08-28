#include <stdio.h>
/* Escreva um algoritmo que leia um conjunto de 50 fichas correspondente à alunos e armazene-as em vetores, cada uma contendo, a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se 
for feminino), e calcule e imprima:\n- A maior e a menor altura da turma;\n- As mulheres com altura acima da média da altura das mulheres;\n- As pessoas com altura abaixo da média da turma.

*/
int main() {
    float alturas[50];
    int sexos[50];
    int contador;
    float maior;
    float menor;
    int acumuladordeAlturaF = 0;
    int somadordeAlturaF = 0;
    int totaldeAltura = 0;

    for(contador = 0; contador < 50; contador ++){
        printf("\nInforme a altura:");
        scanf("%f", &alturas[contador]);
        printf("\nInforme o sexo: ");
        scanf("%i", &sexos[contador]);
        if(sexos[contador] == 2){
            acumuladordeAlturaF ++;
            somadordeAlturaF += alturas[contador];
        }
        totaldeAltura += alturas[contador];
    }

    maior = alturas[0];
    for (contador = 1; contador < 50; contador ++){
        if (alturas[contador] > maior){
            maior = alturas[contador];
        }   
    }
    menor = alturas[0];
    for (contador = 1; contador < 50; contador ++){
        if (alturas[contador] < menor){
            menor = alturas[contador];
        }
        
    }
    
    //Maior e menor altura
    printf("\nA maior altura: %.2f", maior);
    printf("\nA menor altura: %.2f", menor);

    //Mulheres acima da media de altura
    float mediaAlturaF = somadordeAlturaF / acumuladordeAlturaF;
    for (int quantAcimaMediaF = 0; quantAcimaMediaF < somadordeAlturaF; quantAcimaMediaF ++){
        if (sexos[quantAcimaMediaF] == 2 && alturas[quantAcimaMediaF] > quantAcimaMediaF){
            printf("\nMulheres com altura acima da media: %.2f", alturas[quantAcimaMediaF]);
        }
    }

    //Alunos abaixo da media total
    float mediaTotal = totaldeAltura / 50;
    for(int contadorTotal = 0; contadorTotal < 50; contadorTotal ++){
        if (alturas[contadorTotal] < mediaTotal){
            printf("\nAs pessoas abaixo da media: %.2f", alturas[contadorTotal]);
        }  
    }

    
    return 0;
}