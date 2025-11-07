#include <stdio.h>

/* //EJEMPLO 1
int main(){
    int x = 10;
    int *p;

    p = &x; //guarda la direrccion de x

    printf("Valor de x: %d\n",x);
    printf("Direccion de x: %p\n",&x);
    printf("Valor de p (direccion almacenada): %p\n",p);
    printf("Valor al que apunta p (*p): %p\n",*p);

    *p = 20; // MODIFICA X A TRAVES DEL PUNTERO

    printf("Nuevo  valor de x: %d\n",x);

return 0;
}*/

    //EJEMPLO 2

    void intercambiar(int *a, int *b){//procedimiento
    int temp = *a;//variable temporal que es local
    *a = *b;
    *b = temp;
}
int main (){
    int x = 5, y =9;

    printf("Antes: x = %d, y = %d\n",x,y);
    intercambiar(&x, &y);
    printf("Despues: x = %d, y = %d\n",x,y);

return 0;}
