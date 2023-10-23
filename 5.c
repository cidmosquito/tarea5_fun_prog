#include <stdio.h>
int main(void){
    int num[25], i;
    printf("Ingresa 25 números: \n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nNúmeros ingresados: \t");
    for (i = 0; i < 25; i++){
        printf("%d ", num[i]);
    }    
    printf ("\nNúmeros en posiciones pares: \t");
    for (int i = 0; i < 25; i = i + 2){
        printf("%d ", num[i]);
    }
    return 0;
    
}