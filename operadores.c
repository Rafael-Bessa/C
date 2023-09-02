#include <stdio.h>

int main() {
    double num1, num2;
    
    // Solicita ao usu�rio que digite dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);
    
    // Operadores aritm�ticos
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
    
    // Operadores l�gicos
    int e_logico = (igual && maior);
    int ou_logico = (diferente || menor);
    int nao_logico = !igual;
    
    // Operadores de atribui��o
    double resultado = 0.0;
    resultado += soma;
    resultado -= subtracao;
    resultado *= multiplicacao;
    resultado /= divisao;
    
    // Exibindo os resultados
    printf("Operadores Aritm�ticos:\n");
    printf("Soma: %.2lf\n", soma);
    printf("Subtra��o: %.2lf\n", subtracao);
    printf("Multiplica��o: %.2lf\n", multiplicacao);
    printf("Divis�o: %.2lf\n", divisao);
    printf("Resto da Divis�o: %.2lf\n", resto);
    
    printf("Operadores Relacionais:\n");
    printf("Igual: %d\n", igual);
    printf("Diferente: %d\n", diferente);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    printf("Operadores L�gicos:\n");
    printf("E L�gico (igual && maior): %d\n", e_logico);
    printf("OU L�gico (diferente || menor): %d\n", ou_logico);
    printf("N�O L�gico (!igual): %d\n", nao_logico);
    
    printf("Operadores de Atribui��o:\n");
    printf("Resultado Final: %.2lf\n", resultado);
    
    return 0;
}

