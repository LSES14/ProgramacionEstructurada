#include <stdio.h>

int main(){
    int i;
    float prom;
    int a [6] = {1,2,0,0,3,2};
    printf("El primer registro de goles es: %d\n",a[0]);
    printf("El segundo registro de goles es: %d\n",a[1]);

    for(i=0; i<= 5;i++){
        printf("El marcador del juego %d la cantidad de goles es %d\n",i+1,a[i]);
        prom=a[i];
    }
    prom = prom/i+1;
    printf("El promedio de goles es %.2f",prom);

    int c,b[c];
    printf("\n\n\nCual es la cantidad de partidos a promediar:");
    scanf("%i",&c);
    i = 0;
    prom = 0;
    for (i=0;i<c;i++){
        printf("introdusca los goles del parido %i :",i+1);
        scanf("%i",&b[i]);
        prom += b[i];
    }
    prom = prom/c;
    printf("El promedio de goles es: %.2f",prom);
    int opcion,partido;

    do{
            printf("\n\nQue decea hacer?\n");
            printf("1.Ver los resultados de los partidos\n");
            printf("2.Ver el resultado de cierto partido\n");
            printf("3.Modificar todos los resultados\n");
            printf("4.Modificar cierto resultado\n");
            printf("5.Ver promedio\n");
            printf("6.Salir\n");
            scanf("%i",&opcion);

        switch(opcion){
            case 1:
                for(i=0; i<= 5;i++){
                    printf("El marcador del juego %d la cantidad de goles es %d\n",i+1,a[i]);
                                   }
                    break;
            case 2:
                    printf("¿Que partido quieres ver? (1 a %d): ", c);
                    scanf("%d", &partido);
                if (partido > 0 && partido <= c) {
                    printf("El marcador del juego %d: %d goles\n", partido, b[partido - 1]);
                                                 }
                else {
                    printf("Numero de partido invalido.\n");
                     }
                    break;
            case 3:
                for (i=0;i<c;i++){
                    printf("introdusca los goles del parido %i :",i+1);
                    scanf("%i",&b[i]);
                                 }
                    break;
            case 4:
                    printf("¿Que resultado quieres cambiar? (1 a %d): ", c);
                    scanf("%d", &partido);
                if (partido > 0 && partido <= c) {
                    printf("Introduce el nuevo número de goles para el partido %d: ", partido);
                    scanf("%d", &b[partido - 1]);
                                                 }
                else {
                    printf("Numero de partido inválido.\n");
                     }
                break;
            case 5:
                   prom = 0;
                for (i = 0; i < c; i++) {
                    prom += b[i];
                                        }
                    prom = prom / c;
                    printf("El promedio de goles es: %.2f\n", prom);
                break;
            case 6:
                    printf("Saliendo del programa\n");
                    break;

            default:
                    printf("Opcion invalida. Intente de nuevo.\n");
        }

    }while (opcion != 6);

return 0;}
