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

    // espacinho do comeco
    strcpy(v[0][0], "  ");

    // adicinando os numeros da coluna
    for(int j = 1; j < fileiras; j++){

        if(j < 10){ // se a coluna for menor q 10
            v[0][j][0] = '0'; // o primeiro digito vai ser sempre 0
            v[0][j][1] = j + '0'; // o segundo vai ser ele mesmo
        } else {
            v[0][j][0] = (j / 10) + '0';
            v[0][j][1] = (j % 10) + '0';
        }
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