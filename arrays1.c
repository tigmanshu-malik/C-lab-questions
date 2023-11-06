#include<stdio.h>

void sums(int x[], int index, int sum);

void main(){

    int x[] = {1, 2, 3, 4, 5, 6};
    int index = 0, sum = 0;
    sums(x, index, sum);
}

void sums(int x[], int index, int sum){

    if(index == 5){

        printf("%d \n", sum);
        return;
    }
    sum = sum + x[index];
    sums(x, index + 1, sum);
}