#include<stdio.h>

void sort(int n, int x[]);

int main(){

int x[6] = {10, 1, 2, 21, 40, 12};


sort(6, x);

}

void sort(int n, int x[]){



    int min = x[0];
    int c = 0;

    for(int i = 0; i < n - 1; i++){
        
        int min = x[i];

        for(int j = i + 1; j < n; j++){        
        
            if(x[j] < min){
                 
                 min = x[j];
                 c = j;
                 
            }
        }

        
        x[c] = x[i];
        x[i] = min;
        



    }

    for(int i = 0; i < n; i++){

        printf("%d \t", x[i]);
    }
}