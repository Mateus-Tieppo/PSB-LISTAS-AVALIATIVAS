// Exercicio003.c
// Autor: Mateus Tieppo
// Finalidade: Conta quantos números aparecem mais de uma vez em um vetor
// Versão: 1.0
// Data: 17/03/2025

#include <stdio.h>
#define MAX 100

int conta_repetidos(int *vet, int tam) {
    int contador = 0;

    for (int i = 0; i < tam; i++) {
        int repetiu = 0;

        for (int k = 0; k < i; k++) {
            if (vet[i] == vet[k]) {
                repetiu = 1;
                break;
            }
        }

        if (!repetiu) {
            for (int j = i + 1; j < tam; j++) {
                if (vet[i] == vet[j]) {
                    contador++;
                    break;  
                }
            }
        }
    }

    return contador;
}

int main() {
    int vet[MAX], tam;

    scanf("%d", &tam);
    if (tam > MAX) return 1;

    for (int i = 0; i < tam; i++) scanf("%d", &vet[i]);

    printf("%d\n", conta_repetidos(vet, tam));
    return 0;
}
