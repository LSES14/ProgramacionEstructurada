/*//>>>>>>>>>>>>Ejercicio:
***
Estadísticas de calificaciones con punteros
Pedir a los estudiantes que implementen un programa modular que:
Pida al usuario N (entre 3 y 10).
Lea N calificaciones en un arreglo de float.
***

Implemente una función:
void calcularEstadisticas(float v[], int n, float *min, float *max, float *prom);
***
Que:
Use el arreglo v y su tamaño n.
Guarde en *min la calificación mínima.
Guarde en *max la calificación máxima.
Guarde en *prom el promedio.
En main, después de llamar a la función, imprima los tres valores calculados.
****
***Paso de arreglos a funciones (como punteros).
Uso de punteros para "regresar" varios resultados.
Pensar en modularidad: una función que hace el cálculo, main solo muestra resultados.***/


//Template
#include <stdio.h>

void  calcularEstadisticas(float v[], int n, float *min, float *max, float *prom){
float suma = 0;

    *min = v[0];
    *max = v[0];

     for (int i = 0; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
        suma += v[i];
    }

    *prom = suma / n;
}

int main() {
    int n;
    float califs[10];
    float min, max, prom;
    do{
    printf("Cuantas calificaciones (3-10): ");
    scanf("%d", &n);
    } while (n< 3 || n > 10);

    // Validar n simple (opcional).

    for (int i = 0; i < n; i++) {
        printf("Calificacion %d: ", i+1);
        scanf("%f", &califs[i]);
    }

    calcularEstadisticas(califs, n, &min, &max, &prom);

    printf("Minima: %.2f\n", min);
    printf("Maxima: %.2f\n", max);
    printf("Promedio: %.2f\n", prom);

    return 0;
}

