#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int fileiras;
    int colunas;
    int f;
    int c;

    scanf("%d %d", &f , &c);

    fileiras = f + 1;
    colunas = c + 1;

    // cria matriz
    char v[fileiras][colunas][3];

    // preenche tudo com --

    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            strcpy(v[i][j], "--");
        }
    }

    ////// funciona

    char letra_lugar;
    int num_lugar;

    while(scanf(" %c%d", &letra_lugar, &num_lugar)!= EOF){

        int ascii;
        ascii = letra_lugar;

        int pos;
        pos = 65 - ascii + f;

        strcpy(v[pos][num_lugar], "XX");

    }
    
    ////// FUNCIONA

    
    ///////////// PRINT ////////////
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%s\t", v[i][j]);
        }
        printf("\n");

    }

    return 0;
}