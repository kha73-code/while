#include <stdio.h>

int main() {
    int num;
    int suma = 0;

    printf("Introduce números para sumar. Ingresa un número negativo para terminar.\n");

    
    while (1) { 
        printf("Introduce un número: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        suma += num; 
    }

    printf("La suma total es: %d\n", suma);

    return 0;