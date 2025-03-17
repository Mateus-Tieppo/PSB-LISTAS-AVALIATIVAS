// Exercicio007.c
// Autor: Mateus Tieppo
// Finalidade: Determinar a menor quantidade de notas para um valor R
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

int main() {
    int R, notas100, notas50, notas10, notas5, notas1;
    scanf("%d", &R);
    notas100 = R / 100;
    R %= 100;
    notas50 = R / 50;
    R %= 50;
    notas10 = R / 10;
    R %= 10;
    notas5 = R / 5;
    R %= 5;
    notas1 = R;
    printf("%d %d %d %d %d\n", notas100, notas50, notas10, notas5, notas1);
    return 0;
}