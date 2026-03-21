#include <stdio.h>

int main() {
    int v[] = {120, 150, 80, 200, 300, 250};
    int n = 6;
    int maior = 0;

    for (int i = 0; i < n - 1; i++) {
        int soma = v[i] + v[i + 1];
        if (soma > maior) {
            maior = soma;
        }
    }

    printf("Maior soma: %d\n", maior);

    return 0;
}
