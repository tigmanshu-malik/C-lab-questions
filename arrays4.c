#include<stdio.h>

void main(){

    char x[7] = {'a', 'b', 'Z', '2', '5', '*', '$'};

    int count_digit = 0, count_alpha_ = 0, count_oth = 0;

    for(int i = 0; i < 7; i++){

        if(('a' <= x[i] && x[i] <= 'z') || ('A' <= x[i] && x[i] <= 'Z')){

            count_alpha_++;
        }

        else if('0' <= x[i] && x[i] <= '9'){

            count_digit++;
        }

        else{

            count_oth++;
        }
    }

    printf("Digits are %d, alphabets are %d, special char are %d", count_digit, count_alpha_, count_oth);
}