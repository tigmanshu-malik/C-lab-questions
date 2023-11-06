#include<stdio.h>

void main(){

    

    for(int i = 5; i <= 30; i++){

        for(int j = 2; j < i; j++){

            if(i % j == 0){

                break;
            }

            if(j == i - 1){

                printf("%d \t", i);
            }
        }
    }
}