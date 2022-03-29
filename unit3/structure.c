#include <stdio.h>

struct student{
    int alg;
    int mat;
    float promedio;
    char* name;
    char* group;


};

struct transporte{
    int llantas;
    char* color;
    char* name;
};

int main(){
    struct student Carlo = {10,8,10, "Carlo", "A"};
    
    struct transporte coche = {4, "negro","Honda Civic"};
    struct transporte autobus = {8,"blanco","Ruta17"};
    struct transporte moto = {2, "blanco", "honda"};

    //Show info///
    printf("%s : %f\n",Carlo.name, Carlo.promedio);

    return 0;
}