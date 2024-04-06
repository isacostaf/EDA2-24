#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int entradas;

    scanf("%d", &entradas);

    int cod[entradas];
    char v[entradas][16];

    for(int i = 0; i < entradas; i++){
        scanf("%d %s\n", &cod[i], &v[i]);
    }

    int digitado;
    int encontrado = 0;

    while(scanf("%d\n", &digitado)!=EOF){

        for(int i = 0; i < entradas; i++){
            if(digitado == cod[i]){
                printf("%s\n", v[i]);
                encontrado = 1;
            }
        }

        if(encontrado == 0){
            printf("undefined\n");
        }

        encontrado = 0;
    }
    
    return 0;

}