#include <stdio.h>
/*Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura inferior a 15oC nem superior a 40oC. As temperaturas verificadas em cada dia estão disponíveis em uma unidade de entrada de dados.\nFazer um algoritmo que calcule e imprima:\n- A menor temperatura ocorrida;\n- A maior temperatura ocorrida;\n- A temperatura média;\n- O número de dias nos quais a temperatura foi inferior à temperatura média.
*/

int main(){
        float temperatura[121];
        int contador;
        int acumulador = 0;

        for(contador = 0; contador < 121; contador ++){
                printf("Informe a temperatura do dia %i: ", contador);
                scanf("%f", &temperatura[contador]);

                if(temperatura[contador] < 15){
                        temperatura[contador] = 15;
                }else if(temperatura[contador] > 40){
                        temperatura[contador] = 40;
                }
                acumulador += temperatura[contador];
        }
        
        //A menor temperatura
        float menorTemperatura = temperatura[0];
        int menortemp;
        for( menortemp = 1; menortemp < 121; menortemp ++){
                if(temperatura[menortemp] < menorTemperatura){
                        menorTemperatura = temperatura[menortemp];
                }

        }
        printf("\nA menor temperatura: %.2f", menorTemperatura);

        //A maior temperatura
        float maiorTemperatura = temperatura[0];
        int maiortemp;
        for (maiortemp = 1; maiortemp < 121; maiortemp ++){
                if (temperatura[maiortemp] > maiorTemperatura){
                        maiorTemperatura = temperatura[maiortemp];
                }
                
        }
        printf("\nA maior temperatura: %.2f", maiorTemperatura);

        //A media da temperatura
        float mediaTemperatura = acumulador / 121;
        printf("\nTemepratura media %.2f", mediaTemperatura);

        //Numero de dias que abaixo da media
        for(int cont = 0; cont< 121; cont ++){
                if (temperatura[cont] < mediaTemperatura){
                        printf("\nTemperaturas abaixo da media: %.2f", temperatura[cont]);
                }
                
        }


        return 0;
        
}