#include <stdio.h>

int main() {
    double num1, num2;
    
    // Solicita ao usuário que digite dois números
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    
    // Operadores aritméticos
    double soma = num1 + num2;
    double subtracao = num1 - num2;
    double multiplicacao = num1 * num2;
    double divisao = num1 / num2;
    double resto = fmod(num1, num2);
    
    // Operadores relacionais
    int igual = (num1 == num2);
    int diferente = (num1 != num2);
    int maior = (num1 > num2);
    int menor = (num1 < num2);
    
    // Operadores lógicos
    int e_logico = (igual && maior);
    int ou_logico = (diferente || menor);
    int nao_logico = !igual;
    
    // Operadores de atribuição
    double resultado = 0.0;
    resultado += soma;
    resultado -= subtracao;
    resultado *= multiplicacao;
    resultado /= divisao;
    
    // Exibindo os resultados
    printf("Operadores Aritméticos:\n");
    printf("Soma: %.2lf\n", soma);
    printf("Subtração: %.2lf\n", subtracao);
    printf("Multiplicação: %.2lf\n", multiplicacao);
    printf("Divisão: %.2lf\n", divisao);
    printf("Resto da Divisão: %.2lf\n", resto);
    
    printf("Operadores Relacionais:\n");
    printf("Igual: %d\n", igual);
    printf("Diferente: %d\n", diferente);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    printf("Operadores Lógicos:\n");
    printf("E Lógico (igual && maior): %d\n", e_logico);
    printf("OU Lógico (diferente || menor): %d\n", ou_logico);
    printf("NÃO Lógico (!igual): %d\n", nao_logico);
    
    printf("Operadores de Atribuição:\n");
    printf("Resultado Final: %.2lf\n", resultado);
    
    return 0;
}

