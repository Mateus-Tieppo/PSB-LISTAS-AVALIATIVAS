// Exercicio008.c
// Autor: Mateus Tieppo
// Finalidade: Calcular a soma da série S com precisão de 10 casas decimais
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

int main() {
    int n;
    double S = 1.0, fatorial = 1.0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
        S += 1.0 / fatorial;
    }
    printf("%.10lf\n", S);
    return 0;
}
