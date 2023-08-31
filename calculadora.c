#include <stdio.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("Digite a operacao (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisao por zero nao e permitida.\n");
                return 1;  // Sa�da com erro
            }
            break;
        default:
            printf("Operacao invalida.\n");
            return 1;  // Sa�da com erro
    }

    printf("Resultado: %lf\n", resultado);

    return 0;  // Sa�da sem erro
}
