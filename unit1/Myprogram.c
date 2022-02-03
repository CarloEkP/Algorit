#include <stdio.h> //External library.
#include "utils.h"

int main(){
    int number = 5;
    int value = isGreaterThan10(number);
    printf("%d is greater than 10?: %d\n",number, value);
     return 0;
}