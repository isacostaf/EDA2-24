#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int fileiras;
    int colunas;

    scanf("%d %d", &fileiras , &colunas);

    // cria matriz
    char v[fileiras][colunas][3];

    // preenche tudo com --

    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            strcpy(v[i][j], "--");
        }
    }

    ///// ate aqui funciona

    char letra_c;
    int num_c;

    while(scanf(" %c%d", &letra_c, &num_c) != EOF){
        
        // define o int pra letra
        int ascii;
        ascii = letra_c;
        
        int pos;
        pos = 65 - ascii + f;

        printf("%d", pos);

        ///// ATE AQUI TA CERTO

        strcpy(v[pos][num_c], "xx");
    }


    ///////////// PRINT ////////////
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%s\t", v[i][j]);
        }
        printf("\n");

    }

    return 0;
}