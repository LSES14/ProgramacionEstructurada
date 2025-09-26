#include <stdio.h>
//Escribir un programa en C que pida la calificación de un alumno (0 a 100) y su edad.
int main(){

    int edad,calificacion;
    printf("Ingresa tu edad:\n");
    scanf("%d",&edad);
    printf("Ingresa tu calificacion:\n");
    scanf("%d",&calificacion);

    if(edad >= 18){
    if(edad >= 65)
        {
        printf("Adulto mayor\n");
        }
    else
        {
        printf("Adulto\n");
        }
    }
    else
        {
        printf("Menor de edad\n");
        }
    if(calificacion>=60){
        if(calificacion >= 101)
        {
        printf("El valor de la calificacion no es valido\n");
        }
        else
        {
        printf("Aprobado con %d",calificacion);
        }
    }
    else
        {
        printf("Reprobado");
        }

return 0;
}
