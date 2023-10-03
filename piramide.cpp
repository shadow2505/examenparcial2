#include <stdio.h>
//angel a.
int main() {
    int lineas, i, j;

    printf("Numero de lineas en la piramide: ");
    scanf("%d", &lineas);
    int piramide[lineas][lineas];
    for (i = 0; i < lineas; i++) {
        for (j = 0; j <= i; j++) {
            piramide[i][j] = j + 1;
            
        }
    }
    for (i = 0; i < lineas; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", piramide[i][j]);
        }
        printf("\n");
    }

    return 0;
}

