#include <stdio.h>

float arectangulo(float base, float altura){
    return base*altura;
}
float acuadrado(float lado){
    return lado*lado;
}
float atriagulo (float base, float altura){
    return (base*altura)/2;
}

int main(){
    int opcion;
    float base, altura, lado, area;

    printf("==CALCULO DE AREAS==\n");
    printf("1.Area de un rectangulo\n");
    printf("2.Area de un cuadrado\n");
    printf("3.Area de un triangulo\n");
    printf("4.Salir\n");
    scanf("%d",&opcion);

    switch(opcion){
    case 1:
        printf("\n--- Area de  un ractagulo\n");
        printf("Ingrese base y altura ");
        scanf("%f %f",&base, &altura);
        area = arectangulo(base,altura);
        printf("El area del rectangulo es: %.2f\n", area);
        break;

    case 2:
        printf("\n--- Area de  un cuadrado\n");
        printf("Ingrese el lado");
        scanf("%f",&lado);
        area = acuadrado(lado);
        printf("El area del cuadrado es: %.2f\n", area);
        break;

    case 3:
        printf("\n--- Area de  un triangulo\n");
        printf("Ingrese base y altura");
        scanf("%f %f",&base, &altura);
        area = atriagulo (base, altura);
        printf("El area del triangulo es: %.2f\n", area);
        break;

    case 4:
        printf("\nSaliendo del programa...\n");
        break;

    default:
        printf("\nOpcion no valida. Intente de nuevo\n");

    }


    return 0;
    }
