#include <stdio.h>

int main() {
 
 float peso,altura,imc;
 printf("Digite o peso: ");
 scanf("%f",&peso);
 printf("Digite a altura: ");
 scanf("%f", &altura);
 
 imc = peso/(altura*altura);
 peso = (peso <= 0 || peso>=60) * peso;
 altura = (altura <= 0 || altura >=60) * altura;
 imc = (imc >= 0 || imc >= 60) * imc;
 printf("O imc é: %.2f\n",imc);
}