#include <stdio.h>
#include "/mnt/d/UPY/1_cuatri/Algorit/libraries/utils2.h"


int main(){

    int i = 1, j = 10;
    for(;; i++ , j = j+1 ){
        printf("i: %d, j: %d\n", i,j);
        sleep(1000);
    };
}