#include<stdio.h>


int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greater than %d\n",a,b);
    }
    else if (a<b)
    {
        printf("%d is less than %d\n",a,b);
    }
    else
    {
        printf("%d an %d are equal \n",a,b);
    }
    
    
    return 0;
}   