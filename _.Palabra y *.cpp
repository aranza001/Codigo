#include <stdio.h>
#include <string.h>
int main() {
int n, o, p;
char cad[20];
  printf("Ingresa tu palabra: ");
    scanf("%s", cad);
    n = strlen(cad);
    for( o= 0; o < n; o++) {
    for(p = 0; p < n; p++) {
  printf("*");
}
printf("\n");
}
return 0;
}