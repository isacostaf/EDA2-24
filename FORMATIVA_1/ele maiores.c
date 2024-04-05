#include <stdlib.h>
#include <stdio.h>

int main(){

    int entrada;

    scanf("%d", &entrada);

    int v[entrada];
    int soma;
    soma = 0;

    for(int i = 0; i < entrada; i++){
        scanf("%d", &v[i]); // registra o novo elemento ja na pos do vetor
        soma += v[i]; // soma todos os elmentos adicionado
    }

    int media;
    media = soma/entrada;
    int encontrou = 0;

    for(int i = 0; i < entrada; i++){
        if(v[i] > media){

            if(encontrou){
                printf(" ");
            }

            printf("%d", v[i]);
            encontrou = 1;
        }
    }

    if(!encontrou){
        printf("0");
    }

    printf("\n");

    return 0;
}