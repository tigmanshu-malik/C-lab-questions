#include<stdio.h>


int main(){

int n = 500;


for(int i = 1 ; i<=n; i++){

    
    int temp = i, sum = 0;

    while(temp > 0){



            int digit = temp % 10;
            sum = sum + (digit*digit*digit);
            temp = temp/10;

    }

    //printf("%d", sum);

    if( sum == i ){

        printf("%d \t", i);
    }

    

    

    

}


}
