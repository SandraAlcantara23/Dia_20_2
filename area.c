#include <stdio.h>

int main() {
    float lado, area;

    // Solicitar al usuario el valor del lado del cuadrado
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);

    // Calcular el área del cuadrado
    area = lado * lado;

    // Mostrar el resultado
    printf("El área del cuadrado es: %.2f\n", area);

    return 0;
}
