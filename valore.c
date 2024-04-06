#include <stdio.h>

int main() {
    int A = 3;

    printf("Tabla de valores:\n");
    printf("A\tA+2\tA+4\tA+6\n");

    
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);
        A += 3;
    }

    return 0;
}