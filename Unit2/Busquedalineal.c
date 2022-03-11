#include <stdio.h>

int valueTofind = 8;
int linearySearch (int arr[], int sizeArr){
    printf("funcion ejecutado\n");
    for (int index = 0; index < sizeArr; index ++){
        printf("currenct index: %d: arregloData: %d\n", index, arr[index]);
        if(arr[index] == valueTofind) {
            return index;
        }
    }
    return -1;
}


int main( int argc, char**argv) {
    int arr[5] = {50, 5, 1, 27, 4};
    int indexfond = linearySearch(arr, 5);
    printf("index fond: %d\n",indexfond);
    return 0;
}