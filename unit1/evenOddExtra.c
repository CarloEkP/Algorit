#include <stdio.h>

int Num;
int Residuo;
int Cosciente;
int Temporal;

int main(){
printf("Enter Number:\n\tNum: ");
scanf("%d",&Num);

int Cosciente = Num / 2;
int Temporal = Cosciente * 2;
int Residuo = Num - Temporal;

if( Residuo == 0){
        printf("Its even");
    } else {
        printf("Its odd");
    };
    return 0;
}