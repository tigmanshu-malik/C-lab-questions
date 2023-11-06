#include<stdio.h>


int main(){
    int n;

    float sum;

    printf("enter n");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){

        sum = sum + (1/(double)i)  ;
    }

    printf("%f", sum);


}