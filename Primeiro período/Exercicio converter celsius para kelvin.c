#include <stdio.h>

int main() {
  float celsius,kelvin;
    printf("Digite a temperatura em celsius: ");
    scanf("%f",&celsius);
    
    kelvin = celsius + 273;
    kelvin = (kelvin >= 0) * kelvin;
    printf("A temperatura em Kelvin é: %.2f\n", kelvin);
}