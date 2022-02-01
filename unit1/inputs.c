#include <stdio.h>
int num1; //Declarando mi variable
int num2;

int main(){

//imprimir mensaje//
printf("Enter number1,:\n\tnum1: ");
// * inputs *//
scanf("%d",&num1);//inputs keyboard
printf("Enter number1,:\n\tnum1: "); //output screen
scanf("%d",&num2);
//*Procesos*//
int sum = num1 + num2;
printf("suma = %d\n", sum);
    return 0;
}