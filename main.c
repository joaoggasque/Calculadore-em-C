#include <stdio.h>

int main(){
    float num1, num2, resultado;
    int operador;

    //do {}

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Selecione o operador:\n");
    printf("=======================\n");
    printf("1 - Adiçao\n");
    printf("2 - Subtraçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - Divisao\n");
    printf("=======================\n");


    scanf("%d", &operador);

    switch (operador) {
    case 1:
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 4:
        if (num2 != 0) {
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Divisao por zero nao eh permitida.\n");
        }
        break;
    default:
        printf("Operador invalido.\n");
        break;
    }

    return 0;

    
}