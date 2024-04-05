#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char she[100], raj[100];

    scanf("%s %s", she, raj);

    printf("A primeira string é: %s\n", she);
    printf("A segunda string é: %s\n", raj);

    //funciona ate aqui

    //comparamos

    if (strcmp(she, raj) == 0) {
        printf("De novo!\n");
    } else {
        
        //she vencendo
        //tesoura vence
        if((strcmp(she, "tesoura") == 0) && ((strcmp(raj, "papel") == 0)||(strcmp(raj, "lagarto") == 0))){

        }
        //papel vence
        if((strcmp(she, "papel") == 0) && ((strcmp(raj, "pedra") == 0)||(strcmp(raj, "Spock") == 0))){
            
        }
        //pedra vence
        if((strcmp(she, "pedra") == 0) && ((strcmp(raj, "tesoura") == 0)||(strcmp(raj, "lagarto") == 0))){
            
        }
        //lagarto vence
        if((strcmp(she, "lagarto") == 0) && ((strcmp(raj, "Spock") == 0)||(strcmp(raj, "papel") == 0))){
            
        }
        //spock vence
        if((strcmp(she, "Spock") == 0) && ((strcmp(raj, "tesoura") == 0)||(strcmp(raj, "pedra") == 0))){
            
        }

        //raj vencendo









    }


    return 0;
}