#include <stdio.h>
#include <string.h>

/*int main(){
        char usuario[20] = "Juan";
        char saludo[40] = "Hola ";
        strcat(saludo,usuario);
        printf("%s",saludo);

return 0;
}
*/
/*
//ejemplo 1
int main (){
    char nombre[30];
    printf("Ingresa tu nombre: ");
    scanf("%s",nombre);
    printf("Hola, %s!\n", nombre);
return 0;
}
*/

/*
//ejemplo 2
int main (){
    char clave[20];
    printf("Introduce la clave: ");
    scanf("%s",clave);

    if(strcmp(clave, "pascual")== 0)
        printf("Acceso concedido.\n");


    return 0;}
*/

//ejemplo 3
int main(){
    char nombre[20];
    char mensaje[40] = "Hola ";

    printf("Ingresa tu nombre: ");
    scanf("%s",nombre);

    strcat(mensaje,nombre);
    printf("%s, bienvenido al sistema.\n",mensaje);

return 0;}















