#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char she[100], raj[100];

    scanf("%s %s", she, raj);

    //funciona ate aqui

    //comparamos

    if (strcmp(she, raj) == 0) {
        printf("De novo!\n");
    } else {
        
        //she vencendo
        //tesoura vence
        if(((strcmp(she, "tesoura") == 0) && ((strcmp(raj, "papel") == 0)||(strcmp(raj, "lagarto") == 0)))||((strcmp(she, "papel") == 0) && ((strcmp(raj, "pedra") == 0)||(strcmp(raj, "Spock") == 0)))||((strcmp(she, "pedra") == 0) && ((strcmp(raj, "tesoura") == 0)||(strcmp(raj, "lagarto") == 0)))||((strcmp(she, "lagarto") == 0) && ((strcmp(raj, "Spock") == 0)||(strcmp(raj, "papel") == 0)))||((strcmp(she, "Spock") == 0) && ((strcmp(raj, "tesoura") == 0)||(strcmp(raj, "pedra") == 0)))){
            printf("Bazinga!\n");
        }else{
            printf("Raj trapaceou!\n");
        }
    }


    return 0;
}