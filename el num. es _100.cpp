#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 35;
    if (numero < 100) {
         printf ("El numero es menor que 100 ");
         if (numero > 50)
            printf("y mayor que 50 \n");
    }
    printf("fin del programa\n");
    system ("Pause");
    return 0;  
}