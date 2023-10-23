#include <stdio.h>
#include <math.h>
int main(){
    double x, y;
    printf("Se calculará el coseno de un valor + 5.\n");
    printf("Valores de la función \t y = cos(x) + 5:\n");
    for(x =5.0; x <= 30.0; x =x+1.5){
        y=cos(x)+5;
        printf("x = %.2f,\ty = %.2f\n", x, y);
    }
    return 0;
    
}