//2.- Leer 20 calificaciones. 
//Mostrar las calificaciones, 
//así como el promedio de las aprobadas y de las no aprobadas.
#include <stdio.h>
int a, con_a, con_na;
float num[20], aprob, n_aprob, prom;
int main(void){
    printf("Ingrese 20 calificaciones\n");
    for(a=0; a<20; a++){
        printf("Ingrese una calificación:\n");
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
    for(a=0; a<20; a++){
        printf("%d: %.2f. ", a,num[a]);
    }
    prom=aprob/con_a;
    printf("\nEl promedio de las aprobadas es: \t%.2f.", prom );
    prom=aprob/con_na;
    printf("\nEl promedio de las no aprobadas es: \t%2.f.", prom);
    return 0;
    
}
