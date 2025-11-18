#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *califs;
    float suma = 0, max, min;


    printf("Numero de estudiantes: ");
    scanf("%d", &n);


    califs = (float*)malloc(n * sizeof(float));
    if (califs == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("Calificacion %d: ", i + 1);
        scanf("%f", &califs[i]);
        suma += califs[i];
    }


    max = min = califs[0];
    for (int i = 1; i < n; i++) {
        if (califs[i] > max) max = califs[i];
        if (califs[i] < min) min = califs[i];
    }


    printf("\nPromedio general: %.2f\n", suma / n);
    printf("Calificacion mas alta: %.2f\n", max);
    printf("Calificacion mas baja: %.2f\n", min);

    free(califs);

    return 0;
}
