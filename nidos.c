#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,op;
    int i,j;

    for (int i=1; i<=3; i++)
    {
        for(int j=1; j<=2; j++)
            {
                printf("i=%d, j=%d\n", i, j);
            }
    }
return 0;
}

   /*SWITCH CON IF ANIDADO
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
return 0;
}*/

/*ANIDAMIENTO EN IF
if(edad >= 18){
    if(edad >= 65){
        printf("Adulto mayor");
    }
    else{
        printf("Adulto");
           }
}
else{
        printf("Menor de edad");
}


return 0;
}
*/
