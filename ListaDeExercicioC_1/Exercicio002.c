// Exercicio002.c
// Autor: Mateus Tieppo
// Finalidade: Recebe um tempo em segundos desde a meia-noite e retorna horas, minutos e segundos
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>

void hms(unsigned seg, unsigned *h, unsigned *m, unsigned *s) {
    *h = seg / 3600;
    seg %= 3600;
    *m = seg / 60;
    *s = seg % 60;
}

int main() {
    unsigned seg, h, m, s;
    scanf("%u", &seg);
    hms(seg, &h, &m, &s);
    printf("%u %u %u\n", h, m, s);
    return 0;
}