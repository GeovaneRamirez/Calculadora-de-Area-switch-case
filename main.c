#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Programa calcula área\n\n");
    printf("Calcular área sobre qual objeto?\n");
    printf("Quadrado\tRetângulo\tCírculo\n");
    printf("Q\t\tR\t\tC\n");

    calculo();

    /*
    switch(obj){
    case 'q':
    case 'Q':
            printf("Digite o lado do quadrado: "); scanf("%f", &x);
            area = x*x;
            printf("A área do quadrado é: %.2f \n", area);
    break;

    case 'r':
    case 'R':
        printf("Digite os dois lados do retângulo: "); scanf("%f %f", &x, &y);
        area = x*y;
        printf("A área do retângulo é: %.2f \n", area);
    break;

    case 'c':
    case 'C':
        printf("Digite o raio do círculo: "); scanf("%f", &x);
        area = 3.1415*(x*x);
        printf("A área do círculo é: %.2f \n", area);
    break;

    default:
        printf("Opção inválida\n");
        calculo();
    }
    */
    return 0;
}

void calculo(){
    char obj = '\0';
    float area, x, y;

    scanf("%c", &obj); fflush(stdin);

    switch(obj){
    case 'q':
    case 'Q':
            printf("\nDigite o lado do quadrado: \n"); scanf("%f", &x);
            area = x*x;
            printf("A área do quadrado é: %.2f \n", area);
    break;

    case 'r':
    case 'R':
        printf("\nDigite os dois lados do retângulo: \n"); scanf("%f %f", &x, &y);
        area = x*y;
        printf("A área do retângulo é: %.2f \n", area);
    break;

    case 'c':
    case 'C':
        printf("\nDigite o raio do círculo: \n"); scanf("%f", &x);
        area = 3.1415*(x*x);
        printf("A área do círculo é: %.2f \n", area);
    break;

    default:
        printf("\nOpção inválida\n");
        calculo(obj);
    }
}
