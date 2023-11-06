#include <stdio.h>

int main(){

    int a, b;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    int prod = 1;
    int sum = 0;

    for(int i = 1; i<= b ; i++ ){

        sum = sum + a;
    }

    printf("product is %d", sum);
}