#include <stdio.h>

int main(){

//variables//

    int even = 10;
    int odd = 50;
    int number = 1;
    int i;

    //proceso//

    for (i = 1; i <= even; i = i + 1){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }

    while (number <= odd - 1 ){
        number ++;
        if(number % 2 != 0){
            printf("%d\n", number);
        }   
    }
  
}

