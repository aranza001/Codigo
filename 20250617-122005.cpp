#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    int *arreglo = (int*) malloc(x * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al reservar memoria.\n");
        exit(1);
    }
    for (i = 0; i < x; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Valores del arreglo:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    free(arreglo);
    return 0;
}