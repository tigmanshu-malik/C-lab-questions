#include<stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    //revrsing the number

    int x = 0;
    int n = num;

    do{

        int digit = n % 10;
        x = x*10 + digit;
        n = n/10;
    }

    while(n > 0);


    if(x == num){
        printf("its palindrome");
    }

    else{
        printf("not a palindrome");
    }
}