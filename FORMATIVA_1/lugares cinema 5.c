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

    scanf(" %c%d", &letra_lugar, &num_lugar);

    ///// funciona

    int ascii;
    ascii = letra_lugar;

    printf("%d\n", ascii);

    ///// funciona

    int pos;
    pos = 65 - ascii + f;

    printf("pos: %d\n", pos);

    ////// funciona

    strcpy(v[pos][num_lugar], "XX");

    ///////////// PRINT ////////////
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%s\t", v[i][j]);
        }
        printf("\n");

    }

    return 0;
}