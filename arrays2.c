#include<stdio.h>
int main(){
    int a1[4]={1, 3, 5, 7};
    int a2[4] ={};

    

    for(int i=0;i<4;i++){
        
        *(a2 + i) = *(a1 + i);
    }
  
   printf("original is :\n");
   for(int i = 0; i < 4; i++){

    printf("%d \t", *(a1 + i));
    

   }

   printf("copied one is :\n");

    for(int i = 0; i < 4; i++){
   printf("%d \t", *(a2 + i));
   }
}