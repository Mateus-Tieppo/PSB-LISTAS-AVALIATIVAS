// Exercicio003.c
// Autor: Mateus Tieppo
// Finalidade: Calcular quantos segundos se passaram desde o início do dia
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

int main() {
    int horas, minutos, segundos, total;
    scanf("%d %d %d", &horas, &minutos, &segundos);
    total = (horas * 3600) + (minutos * 60) + segundos;
    printf("%d\n", total);
    return 0;
}