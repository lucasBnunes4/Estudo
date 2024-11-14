// main.c


#include <stdio.h>
#include <stdlib.h>
#include "conv_temp.h"

int main(void);

int
main(void) {

        int opcao;
        double valor, resultado;

        do {
                printf("Escolha o tipo de conversao desejado:\n");
                printf("1 - Celsius para kelvin\n");
                printf("2 - kelvin para Celsius\n");
                printf("3 - Celsius para Fahrenheit\n");
                printf("4 - Fahrenheit para Celsius\n");
                printf("5 - kelvin para Fahrenheit\n");
                printf("6 - Fahrenheit para kelvin\n");
                printf("0 - Sair\n");

                printf("Digite a opcao: ");
                scanf("%d", &opcao);


        if (opcao == 0) {
                printf("Saindo do loop...\n");
                break;
        }


        printf("Digite o valor da temperatura: ");
        scanf("%lf", &valor);


        switch (opcao) {
                 case 1:
                        resultado = ctok(valor);
                        printf("Resultado: %.2f graus celsius = %.2f kelvin\n", valor, resultado);
                        break;

                case 2:
                        resultado = ktoc(valor);
                        printf("Resultado: %.2f kelvin = %.2f graus celsius\n", valor, resultado);
                        break;

                case 3:
                        resultado = ctof(valor);
                        printf("Resultado: %.2f graus celsius = %.2f graus fahrenheit\n", valor, resultado);
                        break;

                case 4:
                        resultado = ftoc(valor);
                        printf("Resultado: %.2f graus fahrenheit = %.2f graus celsius\n", valor, resultado);
                        break;

                case 5:
                        resultado = ktof(valor);
                        printf("Resultado: %.2f kelvin = %.2f graus fahrenheit\n", valor, resultado);
                        break;

                case 6:
                        resultado = ftok(valor);
                        printf("Resultado: %.2f graus fahrenheit = %.2f kelvin\n", valor, resultado);
                        break;

                default:
                        printf("Opcao invalida. Tente novamente.\n");

                        }


        printf("\n");

        } while (opcao != 0);

          return 0;
}
