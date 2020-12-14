#include<stdio.h>


int main(){
    int a;
    printf("\nEnter the Number which you want to check: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Given number is even\n");
    }
    else
    {
        printf("given number is not even (Odd)\n");
    }
    
    return 0;
}
