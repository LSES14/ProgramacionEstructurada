#include <stdio.h>

int main(){
    /*int a = 0;
    int b[3];
    printf("%d\n", &a);
    printf("%d\n %d\n %d\n", &b[0], &b[1], &b[2]);*/

    int i, j, G[3][3] = {0, 01, 02, 10, 11, 12, 20, 21, 22};
    printf("%d\n", &G);
    printf(" %d\n %d\n", &G[0][0]);

    for(i = 0; i <= 2; i++){
        printf("\n");
        for(j = 0; j <= 2; j++)
            //printf("\n %d  /%d", &G[i][j], G[i][j]);
            printf("\t%8d", G[i][j]);
    }

    return 0;
}
