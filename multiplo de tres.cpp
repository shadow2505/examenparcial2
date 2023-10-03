#include <stdio.h>

int main() {
    int numeros[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            numeros[i][j] = i * 10 + j + 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (numeros[i][j] % 3 == 0) {
                printf("%d es multiplo de 3\n", numeros[i][j]);
            } else {
                printf("%d no es multiplo de 3\n", numeros[i][j]);
            }
        }
    }

    return 0;
}


