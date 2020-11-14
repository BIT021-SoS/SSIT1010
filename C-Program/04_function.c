#include<stdio.h>
int cg(int a){
    a=77;
    return 0;
}

int main(){
    int c=10;
    cg(c);

    printf("%d",c);
    
    return 0;
}   