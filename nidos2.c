#include <stdio.h>

int main (){
int x,op;
    printf("Escriba un numero:");
    scanf("%d",&x);
    printf("Escriba la opcion:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            if(x > 0)
                printf("Positivo");
            else
                printf("No positivo");
            break;
        case 2:
            if(x%op)
                printf("Impar");
            else
                printf("Par");
            break;
            default:
                printf("No se eligio nada");
            break;
    }
return 0;}
