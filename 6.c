#include <stdio.h>
#define P printf
#define S scanf
int main() {
    int conA = 0, conR = 0, i, n, nA = 0, nR = 0;
    float sumA = 0, sumR = 0, promA = 0, promR = 0;
    P("\nEste programa lee N calificaciones, muestra las calificaciones aprobadas y no aprobadas\t");
    P("\nIngrese el numero de calificaciones que desea ingresar\t");
    S("%d", &n);
    while (n < 1) {
        P("\nIngrese un numero valido de calificaciones\t");
        S("%d", &n);
    }
    float cal[n], A[n], R[n];
    P("\nIngrese %d calificaciones\t", n);
    for (i = 0; i < n; i++) {
        do {
            S("%f", &cal[i]);
            if (cal[i] < 0 || cal[i] > 10) {
                P("\n%.1f no es una calificación valida\t", cal[i]);
            } else if (cal[i] >= 6) {
                A[nA] = cal[i];
                conA++;
                nA++;
            } else {
                R[nR] = cal[i];
                conR++;
                nR++;
            }
        } while (cal[i] < 0 || cal[i] > 10);
    }
    P("\nLas calificaciones fueron\n");
    for (i = 0; i < n; i++) {
        P("%.1f\t", cal[i]);
    }
    if (conA > 0) {
        P("\nLas calificaciones aprobadas fueron\t");
        for (i = 0; i < nA; i++) {
            P("%.1f\t", A[i]);
        }
    } else {
        P("\nNo hubo calificaciones aprobadas\t");
    }
    if (conR > 0) {
        P("\nLas calificaciones reprobatorias fueron\t");
        for (i = 0; i < nR; i++) {
            P("%.1f\t", R[i]);
        }
    } else {
        P("\nNo hubo calificaciones reprobatorias\t");
    }
    return 0;
}