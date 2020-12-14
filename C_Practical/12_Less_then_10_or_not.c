#include<stdio.h>


int main(){
    int n;
    printf("Entyer the number you want to check");
    scanf("%d",&n);
    if (n>10)
    {
        printf("%d is greater than 10\n",n);
    }
    else
    {
        printf("%d is less than 10\n",n);
    }
    
    return 0;
}
