#include <stdio.h>
/*Uma grande firma deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler um número indeterminado de informações (máximo de 300) contendo o número do empregado e o número de meses de trabalho deste empregado e imprimir os três mais recentes.\nObservações: A última informação contém os dois números iguais a zero. Não existem dois empregados admitidos no mesmo mês.
*/

int main() {
    int maxEmpregados = 300;
    int numeros[maxEmpregados];
    int meses[maxEmpregados];

    int contador = 0;

    while (contador < maxEmpregados) {
        printf("Digite o número do empregado (ou 0 para sair): ");
        scanf("%d", &numeros[contador]);

        if (numeros[contador] == 0) {
            break;
        }

        printf("Digite o número de meses de trabalho do empregado: ");
        scanf("%d", &meses[contador]);

        contador++;
    }
    for (int i = 0; i < contador - 1; i++) {
        for (int j = 0; j < contador - i - 1; j++) {
            if (meses[j] < meses[j + 1]) {
                int tempNumero = numeros[j];
                int tempMeses = meses[j];
                numeros[j] = numeros[j + 1];
                meses[j] = meses[j + 1];
                numeros[j + 1] = tempNumero;
                meses[j + 1] = tempMeses;
            }
        }
    }

    printf("\nOs três empregados mais recentes:\n");
    for (int i = 0; i < 3 && i < contador; i++) {
        printf("Empregado %d, Meses de Trabalho: %d\n", numeros[i], meses[i]);
    }

    return 0;
}

