#include <stdio.h>

int main() {
    int idades[] = {17, 22, 35, 37, 48};

    for (int i = 0; i < 5; i++) {
        if (idades[i] % 2 != 0) {
            printf("%d ", idades[i]);
        }
    }

    return 0;
}
