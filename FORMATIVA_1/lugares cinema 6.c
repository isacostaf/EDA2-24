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

    // Alocação dinâmica da matriz
    char (*v)[colunas][3] = malloc(fileiras * sizeof(*v));

    // preenche tudo com --
    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            strcpy(v[i][j], "--");
        }
    }

    // espacinho do comeco
    strcpy(v[0][0], "  ");

    // adicinando os numeros da coluna
    for(int j = 1; j < colunas; j++){

        if(j < 10){ // se a coluna for menor q 10
            v[0][j][0] = '0'; // o primeiro digito vai ser sempre 0
            v[0][j][1] = j + '0'; // o segundo vai ser ele mesmo
        } else {
            v[0][j][0] = (j / 10) + '0';
            v[0][j][1] = (j % 10) + '0';
        }
    }

    // faca a primeira coluna ter as letras a, b,c,d... debaixo pra cima
    for(int i = 1; i < fileiras; i++) {
        char letra = 'A' + (fileiras - 1 - i); // Determina a letra para a fileira
        v[i][0][0] = letra; // A primeira posição da coluna 0 armazena a letra
        v[i][0][1] = ' '; // Espaço em branco
    }

    char letra_lugar;
    int num_lugar;

    while(scanf(" %c%d", &letra_lugar, &num_lugar)!= EOF){

        int pos_letra = fileiras - (letra_lugar - 'A') - 1;
        int pos_numero = num_lugar;

        strcpy(v[pos_letra][pos_numero], "XX");
    }
    
    // Impressão da matriz
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%s\t", v[i][j]);
        }
        printf("\n");
    }

    // Liberar memória
    free(v);

    return 0;
}
