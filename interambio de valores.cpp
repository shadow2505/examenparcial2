#include <stdio.h>

int main() {
    int matriz[3][3];
    int v1, v2, v3;
    
    printf("Ingrese el valor de v1: ");
    scanf("%d", &v1);
    printf("Ingrese el valor de v2: ");
    scanf("%d", &v2);
    printf("Ingrese el valor de v3: ");
    scanf("%d", &v3);

    matriz[0][0] = v1;
    matriz[0][1] = v2;
    matriz[0][2] = v3;

    int temp;

    temp = matriz[0][0];
    matriz[0][0] = matriz[0][1];
    matriz[0][1] = matriz[0][2];
    matriz[0][2] = temp;

    printf("El valor de v1 ahora es: %d\n", matriz[0][0]);
    printf("El valor de v2 ahora es: %d\n", matriz[0][1]);
    printf("El valor de v3 ahora es: %d\n", matriz[0][2]);

    return 0;
}

