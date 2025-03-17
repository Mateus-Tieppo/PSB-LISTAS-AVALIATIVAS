// Exercicio002.c
// Autor: Mateus Tieppo
// Finalidade: Converter temperatura de Fahrenheit para Celsius
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    scanf("%lf", &fahrenheit);
    celsius = 5.0 / 9.0 * (fahrenheit - 32);
    printf("%.4lf\n", celsius);
    return 0;
}