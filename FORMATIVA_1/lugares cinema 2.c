
// criamos uma matriz com o num digitado
// lemos a entrada e inserimos

// ao ler a letra trasnformamos em ascii
// a vale 65
// entao sempre pegamos o caracter e diminuimos a
// pq se a letra for ent o lugar vai ser 0
// se a letra for b o lugar vai ser 1

// entao fazemos z - a letra digitada
// assim z-z 0
// z-y 1



////////////
// descobrimos quantas fileiras tem
// ex: 5

// a gente soma 65 + o numero de fileiras = K
// e depois pra desocbrir faz K - ASCII do num digitado

// vamos imprimir por fora a letra e o num da fileira

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int fileiras, colunas;

    scanf("%d %d", &fileiras, &colunas);

    char v[fileiras][colunas][3];

    // preenchemos toda a matriz com --

    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            strcpy(v[i][j], "--");
        }
    }

    // pedimos pro usuario adicionar entrada
    char lf;
    int lc;

    int k = 65 + fileiras;

    while(scanf(" %c%d", &lf, &lc) != EOF){

        // temos um char que define fileira
        // e um num que define coluna

        int fil;
        int ascii;
        ascii = lf;
        fil = k - ascii;

        // agora temos a fileira comecando em 1
        // as colunas ja sao dadas a aprtir de 1

        // ent fil e lc ja estao prontos

        strcpy(v[fil][lc], "XX");
    }

    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            printf("%s", v[i][j]);
        }

    }

    return 0;
}