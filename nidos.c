#include <stdio.h>

int main(){
    int edad;
    printf("Introduce tu edad:");
    scanf("%d",&edad);
    if(edad >= 18){
    if(edad >= 65)
        {
        printf("Adulto mayor");
        }
    else
        {
        printf("Adulto");
        }
}
    else
        {
        printf("Menor de edad");
        }

return 0;
}

