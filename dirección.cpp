#include <stdio.h>
#include <stdlib.h>

int main (){
 int x=17,y ;
 int *p;
 p=&x;
 printf ("el valor de x es: %d\n",*p); 
 y=*p+ 3;
 printf ("el valor de y es %d\n",y);
 return 0;
}