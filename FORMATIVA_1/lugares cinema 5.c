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

    // funciona

    for(int j = 1; j < colunas; j++){

        /// faca a primeira coluna ter as letras a, b,c,d... debaixo pra cima

        char letra = 'A' + (fileiras - 1 - j); // Determina a letra para a fileira
        v[j][0][0] = letra; // A primeira posição da coluna 0 armazena a letra
        v[j][0][1] = ' '; // Espaço em branco

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