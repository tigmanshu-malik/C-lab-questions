#include<stdio.h>

int main(){
    int n;
    printf("Enter n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        

        for(int j = 2; j < i ; j++){

            if((i % j) == 0){
                break;
            }

            if(j == i - 1){
                printf("%d \t", i);
            }
        }

        
        

        
    }
}