#include <stdio.h>

int main() {
    int v[] = {2, 8, 1, 6, 10};
    char sobrenome[] = "nazario";

    // números maiores que 5
    for (int i = 0; i < 5; i++) {
        if (v[i] > 5) {
            printf("%d ", v[i]);
        }
    }

    printf("\n");

    // letras alternadas do sobrenome
    for (int i = 0; sobrenome[i] != '\0'; i += 2) {
        printf("%c", sobrenome[i]);
    }

    return 0;
}
