//7.- Leer 35 números. Mostrar los números y en otros dos arreglos almacenar 
//en uno los números pares y en el otro los impares.

#include<stdio.h>
int num[35], par[35], impar[35], a, con_p, con_imp;
int main(){
    printf("Este programa leerá 35 números y almacenará de forma separada los pares e impares.\n");
    printf("Ingresa un número:\n");
    //temp 4 nums
    for(a=0;a<4;a++){
        scanf("%d", &num[a]);
        if((num[a]%2)==0){
            par[a]=num[a];
            con_p++;
        } else {
            impar[a]=num[a];
            con_imp++;
        }
    }
    printf("\nLos números ingresados son:\t");
    for(a=0;a<4;a++){
        printf("%d ", num[a]);
    }
    if(con_p>0){
        printf("\nLos pares fueron:\t");
        for(a=0;a<4;a++){
            printf("%d ", par[a]);
        }
    } else {
        printf("\nNo hubo números pares.");
    }
    if(con_imp>0){
        printf("\nLos impares fueron:\t");
        for(a=0;a<4;a++){
            printf("%d ", impar[a]);
        }
    } else {
        printf("\nNo hubo números impares.");
    }
}