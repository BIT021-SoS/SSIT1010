#include<stdio.h>

int fib(int a){
    if (a==1 || a==2)
    {
        return 1;
    }
    else
    {
        return fib(a-1)+fib(a-2);
    }
    
}

int main(){
    int a=5;
    
    printf(" %d",fib(5));
    
    

    
    return 0;
}   