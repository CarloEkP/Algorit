#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){

    //variables//

    int Mes = 1;
    int i;

    //Proceso//

    while(Mes <= 12){

        switch(Mes){

            case 1:
                printf("ENERO\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                } 
            break;

            case 2:
                printf("FEBRERO\n");
                for(i = 1 ; i < 29 ; i++ ){
                printf("%d\n", i);
                } 
            break;

            case 3:
                printf("MARZO\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 4:
                printf("ABRIL\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;
                
            case 5:
                printf("MAYO\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 6:
                printf("JUNIO\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;
                
            case 7:
                printf("JULIO\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 8:
                printf("AGOSTO\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 9:
                printf("SEPTIEMBRE\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 10:
                printf("OCTUBRE\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 11:
                printf("NOVIEMBRE\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 12:
                printf("DICIEMBRE\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
                break;
        }   
        Mes++;
    }
    
    return 0;
}


