#include <stdio.h>
#include <string.h>

int maximo (int a, int b);
int main() {
    int a, b, resultado;
    printf("Escribe un numero:\n ");
    scanf("%d", &a);
    printf("Escribe un segundo numero: \n ");
    scanf("%d", &b);
    resultado = maximo(a,b);
    printf ("es numero es mayor:%d\n",resultado);
        return 0;
        }
    int maximo(int a, int b){
    int maximo;
    if( a > b){
    printf("'%d' es mayor\n", a);
    maximo=a;
    }else{
    printf("'%d' es mayor\n", b);
    maximo=b;
    }
    return maximo;
}