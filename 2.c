//2.- Leer 20 calificaciones. 
//Mostrar las calificaciones, 
//así como el promedio de las aprobadas y de las no aprobadas.
#include <stdio.h>
int a, con_a, con_na;
float num[21], aprob, n_aprob, prom;
int main(void){
    printf("Ingrese 20 calificaciones\n");
    for(a=0; a<21; a++){
        printf("Ingrese una calificación:\t");
        scanf("%f", &num[a]);
        while (num[a]<0.0 || num[a]>10.0)
        {
            printf("Ingrese una calificación valida.\n");
            scanf("%f",&num[a]);
        }
        if(num[a]>=6){
            aprob = aprob + num[a];
            con_a++;
        } else {
            n_aprob = n_aprob + num [a];
            con_na++;
        }
        }
    printf("Calificaciones: \n");
    for(a=0; a<21; a++){
        printf("%d: %.2f. ", a,num[a]);
    }
    if (con_a > 0) {
        prom=aprob/con_a;
        printf("\nEl promedio de las aprobadas es: \t%.2f.", prom );
    } else {
        printf("\nNo hubo calificaciones aprobadas\n");
    }

    if (con_na > 0) {
        prom=aprob/con_na;
    printf("\nEl promedio de las no aprobadas es: \t%2.f.", prom);
    } else {
        printf("\nNo hubo calificaciones reprobadas\n");
    }
    return 0;
}