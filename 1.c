//1.- Leer 20 números en el rango de 40 a 90. 
//Mostrar el arreglo en forma horizontal, así como el promedio.
#include <stdio.h>
int num[20], a;
double prom = 0;
int main(){
    printf("Ingresa 20 números en un rango de 40 - 90: \n");
    printf("Ingresa un número: \n");
    for(a=0; a<20; a++){
        scanf("%d", &num[a]);
        while(num[a]<40 || num[a]>90){
            printf("El número no está dentro del rango permitido. Ingresa otro. \n");
            scanf("%d", &num[a]);
        }
    }
    for(a=0;a<20;a++){
        prom = prom + num[a];
    }
    for(a=0;a<20;a++){
        printf("%d ", num[a]);
    }
    prom = prom/20;
    printf("\nEl promedio de los números es: %.2f", prom);


}
