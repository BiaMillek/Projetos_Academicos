#include <stdio.h>

int main() {
 
    float valor1,valor2,resultado;
    printf("Escreva o primeiro valor: ");
    scanf("%f",&valor1);
    printf("Escreva o segundo valor: ");
    scanf("%f", &valor2);
 
    resultado = valor1/valor2;
    valor1 = (valor1 < 0) * valor1 + (valor1 == 0) * 1;
    valor2 = (valor2 < 0) * valor2 + (valor2 == 0) * 1;
    printf("O resultado é: %.2f\n", resultado);
 
 
}