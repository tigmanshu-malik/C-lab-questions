#include<stdio.h>

int main(){

    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {6, 7, 8, 9};
    int a3[9] = {};

    for(int i = 0; i < 5; i++){

        a3[i] = a1[i];
    }

    for(int j = 5 ; j < 10; j++){

            a3[j] = a2[j - 5];
        }

    for(int i = 0; i < 9; i++){

        printf("%d ", a3[i]);
    }


}