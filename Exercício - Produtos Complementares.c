#include <stdio.h>

int main() {
    int precos[] = {5, 15, 40, 10};
    int alvo = 25;
    int tamanho = 4;

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (precos[i] + precos[j] == alvo) {
                printf("Indices: [%d, %d]\n", i, j);
            }
        }
    }

    return 0;
}
