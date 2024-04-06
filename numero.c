#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    
    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

 
    printf("La suma de los números desde 1 hasta %d es: %d\n", numero, suma);

    return 0;
}