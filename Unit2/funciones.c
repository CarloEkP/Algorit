#include <stdio.h>

int sumaNumbers ( int numer1, int number2);


int main (int argc, char**argv){

    // Llamando a la funcion //

    int mySum = sumaNumbers(2 , 4);
    printf("suma 10 + 20 = %d\n", sumaNumbers (10, 20));
}

// Definir la funcion //

int sumaNumbers(int number1, int number2){

    // Variables Locales //
    
    int suma = 0;
    suma = number1 + number2;
    return suma;
}