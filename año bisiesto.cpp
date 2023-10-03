#include <stdio.h>

int main() {
    int a;

    printf("Introduzca un año: ");
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        printf("Es bisiesto\n");
    } else {
        printf("No es bisiesto\n");
    }

    return 0;
}

