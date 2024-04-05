
#include <stdlib.h>
#include <stdio.h>

// lemos quantas entradas vao ser
// declaramos um vetor com esse num de entradas
// fazemos ja a soma de cada elemento
// descobrimos a media
// lemos de novo ja imprimindo qm for maior q a media

int main(){

    int entrada;
    scanf("%d", &entrada); // quantos elementos vamos ler

    int v[entrada]; // criamos um vetor com o numero de entradas que vamos ler

    long int soma;
    soma = 0; //criamos a soma que vai arman=zenar a soma de todos os elementos

    //lemos e adicionamos no vetor
    for(int i = 0; i < entrada; i++){
        scanf("%d", &v[i]);
        soma = soma + v[i];
    }

    // todos os elementos ja estao em suas casas
    // soma armazena a soma de todos eles

    int media;
    media = soma/entrada;
    int confere = 0;

    for(int j = 0; j < entrada; j++){
        if(v[j] > media){
            if(confere != 0){
                printf(" ");
            }
            printf("%d", v[j]);
            confere = 1;
        }
    }

    if(confere == 0){
        printf("0");
    }

    printf("\n");

    return 0;
}