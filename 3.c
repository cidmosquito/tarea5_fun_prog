#include <stdio.h>
int main(){
    float d, t, v;
    printf("\nSe calculará la velocidad\n");
    printf("Ingresa la distancia en metros: \n");
    scanf("%f", &d);
    while(d<0){
        printf("\nLa distancia no puede ser negativa.\nIngresa una distancia en metros: \n");
        scanf("%f", &d);
    }
    printf("Ingresa el tiempo en segundo: \n");
    scanf("%f", &t);
    while(t<0){
        printf("\nEl tiempo no puede ser negativo.\nIngresa una distancia en metros: \n");
        scanf("%f", &t);
    }
    if (t>=0){
        v=d/t;
        printf("La velocidad es %.2f m/s\n", v);
    } else {
        printf("El tiempo no pueder ser cero para calcular la velocidad.\n");
    }
    return 0;
    
}