#include<stdio.h>

int main(){
    int x, y; 
    x = 10;
    y = 20;
  
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("After Swapping: x = %d, y = %d\n", x, y); 
    return 0;
}   