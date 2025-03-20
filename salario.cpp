#include <stdio.h>
#include <stdlib.h>
int main() {
    int antiguedad;
    float sueldo, X;
    printf("Ingresa tus años de antigüedad: ");
    scanf("%d", &antiguedad);
    printf("Ingresa tu Sueldo mensual actual : ");
    scanf("%d", &sueldo);
    X = sueldo * 100/10;
    if (antiguedad >= 5) {
        
        if (X >= 1000)
        printf("Puedes obtener el crédito.\n");
        else
        printf("No puede obtener tu crédito.\n");
    } else {
        printf("No puede obtener tu crédito.\n");
    }
    printf("Fin del programa\n");
    
    return 0;
}