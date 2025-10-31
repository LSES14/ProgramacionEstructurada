#include <stdio.h>
/*void funcion1 (int *A){
    printf("Imprimiendo desde funcion 1 = %d\n",*A);
    *A = 10;
    printf("Imprimiendo desde funcion 1 = %d\n",*A);
    return 0;}
int main(){
    int A=5;
    printf("Imprimiendo desde main = %i\n",A);
    funcion1 (&A);
    printf("Imprimiendo funcion desde main = %d",A);
}*/
void cuadradoPorValor(int n){
    n = n * n;
    printf("[cuadradoPorValor] n = %d\n",n);
}
void cuadradoPorReferencia(int *n){
    *n = (*n) * (*n);
    printf("[cuadradoPorReferencia] *n = %d\n",*n);
}
int main(){
    int a = 3, b = 3;

    printf("Antes de cuadradoPorValor a = %d\n", a);
    cuadradoPorValor(a);
    printf("Despues de cuadradoPorValor a = %d\n\n", a);

    printf("Antes de cuadradoPorReferencia b = %d\n", b);
    cuadradoPorReferencia(&b);
    printf("Despues de cuadradoPorReferencia b = %d\n\n", b);

return 0;
}
