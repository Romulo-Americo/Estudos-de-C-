#include <stdio.h>
/*Numa corrida há 10 corredores, de número de inscrição de 1 a 10. Faça um algoritmo que leia os valores do número do corredor e o seu respectivo tempo na corrida. Além disso, o programa deve imprimir a qualificação e o tempo de corrida, do primeiro ao décimo colocado, identificando o número de inscrição do corredor referente àquela colocação. Suponha que não há tempos iguais.
*/

int main() {
    int numCorredores = 10;
    int numeros[10];
    float tempos[10];

    for (int i = 0; i < numCorredores; i++) {
        printf("Digite o número de inscrição do corredor %d: ", i + 1);
        scanf("%d", &numeros[i]);

        printf("Digite o tempo de corrida do corredor %d: ", i + 1);
        scanf("%f", &tempos[i]);
    }

    for (int i = 0; i < numCorredores - 1; i++) {
        for (int j = 0; j < numCorredores - i - 1; j++) {
            if (tempos[j] > tempos[j + 1]) {
                int tempNumero = numeros[j];
                float tempTempo = tempos[j];
                numeros[j] = numeros[j + 1];
                tempos[j] = tempos[j + 1];
                numeros[j + 1] = tempNumero;
                tempos[j + 1] = tempTempo;
            }
        }
    }
    printf("\nClassificação\tNúmero\tTempo\n");
    for (int i = 0; i < numCorredores; i++) {
        printf("%d\t\t%d\t%.2f\n", i + 1, numeros[i], tempos[i]);
    }

    return 0;
}