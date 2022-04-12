#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Programa calcula �rea\n\n");
    printf("Calcular �rea sobre qual objeto?\n");
    printf("Quadrado\tRet�ngulo\tC�rculo\n");
    printf("Q\t\tR\t\tC\n");

    calculo();

    /*
    switch(obj){
    case 'q':
    case 'Q':
            printf("Digite o lado do quadrado: "); scanf("%f", &x);
            area = x*x;
            printf("A �rea do quadrado �: %.2f \n", area);
    break;

    case 'r':
    case 'R':
        printf("Digite os dois lados do ret�ngulo: "); scanf("%f %f", &x, &y);
        area = x*y;
        printf("A �rea do ret�ngulo �: %.2f \n", area);
    break;

    case 'c':
    case 'C':
        printf("Digite o raio do c�rculo: "); scanf("%f", &x);
        area = 3.1415*(x*x);
        printf("A �rea do c�rculo �: %.2f \n", area);
    break;

    default:
        printf("Op��o inv�lida\n");
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
            printf("A �rea do quadrado �: %.2f \n", area);
    break;

    case 'r':
    case 'R':
        printf("\nDigite os dois lados do ret�ngulo: \n"); scanf("%f %f", &x, &y);
        area = x*y;
        printf("A �rea do ret�ngulo �: %.2f \n", area);
    break;

    case 'c':
    case 'C':
        printf("\nDigite o raio do c�rculo: \n"); scanf("%f", &x);
        area = 3.1415*(x*x);
        printf("A �rea do c�rculo �: %.2f \n", area);
    break;

    default:
        printf("\nOp��o inv�lida\n");
        calculo(obj);
    }
}
