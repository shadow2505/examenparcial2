#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion;
    srand(time(NULL));

    while (1) {
        int numAleatorio = rand() % 5 + 1; 

        switch (numAleatorio) {
            case 1: 
                {
                    int num1 = rand() % 100;
                    int num2 = rand() % 100;
                    printf("%d + %d = %d\n", num1, num2, num1 + num2);
                }
                break;

            case 2:
                {
                    int num1 = rand() % 100;
                    int num2 = rand() % 100;                    
                    printf("%d - %d = %d\n", num1, num2, num1 - num2);
                }
                break;

            case 3: 
                {
                    int num1 = rand() % 10;
                    int num2 = rand() % 10;                    
                    printf("%d * %d = %d\n", num1, num2, num1 * num2);
                }
                break;

            case 4: 
                {
                    int num1 = rand() % 100 + 1;
                    int num2 = rand() % 10 + 1;
                    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                }
                break;

            case 5: 
                printf("Programa terminado.\n");
                return 0;

            default:
                printf("Opcion invalida.\n");
                break;
        }
    }

    return 0;
}

