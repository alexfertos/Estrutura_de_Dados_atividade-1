// Exercício - Soma de Reproduções Consecutivas
#include <stdio.h>

int main() {
    int reproducoes[] = {50, 90, 120, 30, 200};
    int tamanho = 5;
    int maiorSoma = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int soma = reproducoes[i] + reproducoes[i + 1];

        if (soma > maiorSoma) {
            maiorSoma = soma;
        }
    }

    printf("Maior soma consecutiva: %d\n", maiorSoma);

    return 0;
}
