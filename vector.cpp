
#include <stdio.h>
int main (){
    int vector[100];
    int i= 0; 
    while (i < 100) {
vector [i]= 2 *(i);
i++;
}
i=0;
printf ("Tabla del 2 hasta el 100:\n");
while (i<100){
printf ("%d x 2 = %d\n",i,vector[i]);
i++;}
return 0;
}