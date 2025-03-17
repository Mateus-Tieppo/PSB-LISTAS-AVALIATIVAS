// Exercicio004.c
// Autor: Mateus Tieppo
// Finalidade: Calcular quantos segundos faltam até o fim do dia
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

int main() {
    int horas, minutos, segundos, total;
    scanf("%d %d %d", &horas, &minutos, &segundos);
    total = 86400 - ((horas * 3600) + (minutos * 60) + segundos);
    printf("%d\n", total);
    return 0;
}
