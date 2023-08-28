#include <stdio.h>
/*Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números inteiros de 1 a 100. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica, para cada mercadoria, o preço de venda. Escreva um algoritmo para calcular o faturamento mensal do armazém. A tabela de preços é fornecida seguida pelos números das mercadorias e as quantidades vendidas. Quando uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar da quantidade.
*/


int main() {
    int tabelaPrecos[100]; 
    int quantidadeVendida[100]; 
    int numeroMercadoria;
    int faturamentoTotal = 0;

   
    for (int i = 0; i < 100; i++) {
        tabelaPrecos[i] = 0;
        quantidadeVendida[i] = 0;
    }
    for (int i = 0; i < 100; i++) {
        printf("Informe o preço da mercadoria %i: ", i + 1);
        scanf("%i", &tabelaPrecos[i]);
    }
    while (1) {
        printf("Informe o número da mercadoria (ou 0 para sair): ");
        scanf("%i", &numeroMercadoria);
        if (numeroMercadoria == 0) {
            break; 
        }
        if (numeroMercadoria < 1 || numeroMercadoria > 100) {
            printf("Número de mercadoria inválido!\n");
            continue;
        }

        int quantidade;
        printf("Informe a quantidade vendida da mercadoria %i: ", numeroMercadoria);
        scanf("%i", &quantidade);
        quantidadeVendida[numeroMercadoria - 1] += quantidade; 
        faturamentoTotal += quantidade * tabelaPrecos[numeroMercadoria - 1]; 
    }

    printf("Faturamento total do mês: %i\n", faturamentoTotal);

    return 0;
}

